#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct node {
    int data;                  // Data stored in the node
    struct node* next;         // Pointer to the next node
} node;

// Function prototypes
node* reverse_recursive(node* head);   // Recursively reverses a linked list
void push(node** head_ref, int new_data);  // Pushes new data onto the list
void print_list(node* head);           // Prints the linked list

int main() {
    node* head = NULL;                 // Create an empty linked list

    // Creating a linked list
    push(&head, 1);                    // Insert 1 at the head
    push(&head, 2);                    // Insert 2 at the head
    push(&head, 3);                    // Insert 3 at the head
    push(&head, 4);                    // Insert 4 at the head

    printf("original list:\n");
    print_list(head);                  // Print the original list

    head = reverse_recursive(head);    // Reverse the list using recursion
    printf("reversed list (recursive):\n");
    print_list(head);                  // Print the reversed list

    return 0;
}

// Other functions

// Recursively reverses a linked list
node* reverse_recursive(node* head) {
    if (head == NULL || head->next == NULL) {  // Base case: if empty list or single node, return it
        return head;
    }

    node* rest = reverse_recursive(head->next);  // Recursively reverse the rest of the list
    head->next->next = head;       // Set the next node's next pointer to the current node
    head->next = NULL;             // Set the current node's next pointer to NULL

    return rest;                   // Return the new head of the reversed list
}

// Pushes a new node to the front of the list
void push(node** head_ref, int new_data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = new_data;     // Set the data of the new node
    new_node->next = *head_ref;    // Make the new node point to the current head
    *head_ref = new_node;          // Update the head to the new node
}

// Prints the entire linked list
void print_list(node* head) {
    while (head != NULL) {         // Traverse the list
        printf("%d ", head->data); // Print the data in each node
        head = head->next;         // Move to the next node
    }
    printf("\n");
}
