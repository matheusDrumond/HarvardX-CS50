#include <stdio.h>
#include <stdlib.h>

// Define a struct for a node in the linked list
typedef struct node
{
    int value;              // The value that the node stores
    struct node *next;      // Pointer to the next node in the list
} node;

// Function to recursively print the linked list
void print_linked_list(node *n);

int main(int argc, char *argv[])
{
    // Ensure there are enough command line arguments
    if (argc < 2)
    {
        printf("Usage: ./linked int int int int int...\n");
        return 1;
    }

    node *list = NULL;  // Pointer to the head of the list
    node *prev = NULL;  // Pointer to the previous node (used for linking nodes)

    // Loop through the command line arguments and create nodes for each one
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);  // Convert the argument to an integer

        // Allocate memory for a new node
        node *n = malloc(sizeof(node));
        if (n == NULL)  // If malloc fails, free any allocated memory and return an error
        {
            node *current = list;
            while (current != NULL)
            {
                node *next = current->next;  // Save the next node
                free(current);               // Free the current node
                current = next;              // Move to the next node
            }
            return 1;  // Exit due to memory allocation failure
        }

        n->value = number;  // Set the value of the node
        n->next = NULL;     // Initialize the next pointer to NULL

        // If this is the first node, set it as the head of the list
        if (i == 1)
        {
            list = n;   // The first node becomes the head of the list
            prev = n;   // The previous node is now the current node
        }
        else
        {
            prev->next = n;  // Link the previous node to the current one
            prev = n;        // Update prev to the current node
        }
    }

    // Print the entire linked list
    print_linked_list(list);

    // Free the entire linked list after printing
    node *current = list;  // Start from the head of the list
    while (current != NULL)
    {
        node *next = current->next;  // Save the next node before freeing
        free(current);               // Free the current node
        current = next;              // Move to the next node
    }

    return 0;
}

// Function to recursively print the linked list
void print_linked_list(node *n)
{
    // If the node is not NULL, print its value and recursively call the function
    if (n != NULL)
    {
        printf("%i\n", n->value);  // Print the value of the current node
        print_linked_list(n->next);  // Recursively print the next node
    }
}
