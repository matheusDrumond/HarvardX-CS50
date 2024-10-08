#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct node {
    int data;                // Data stored in the node
    struct node* next;       // Pointer to the next node
} node;

// Function prototypes
node* merge_lists(node* l1, node* l2);   // Merges two sorted linked lists
void push(node** head_ref, int new_data);  // Pushes new data onto the list
void print_list(node* head);              // Prints the linked list

int main() {
    node* list1 = NULL;    // Create an empty linked list for list 1
    node* list2 = NULL;    // Create an empty linked list for list 2

    // Create two sorted linked lists
    push(&list1, 6);       // Insert 6 into list1
    push(&list1, 4);       // Insert 4 into list1
    push(&list1, 2);       // Insert 2 into list1

    push(&list2, 5);       // Insert 5 into list2
    push(&list2, 3);       // Insert 3 into list2
    push(&list2, 1);       // Insert 1 into list2

    printf("list 1:\n");
    print_list(list1);     // Print the first list

    printf("list 2:\n");
    print_list(list2);     // Print the second list

    // Merge the two sorted lists
    node* merged_list = merge_lists(list1, list2);
    printf("merged list:\n");
    print_list(merged_list);  // Print the merged list

    return 0;
}

// Other functions

// Merges two sorted linked lists
node* merge_lists(node* l1, node* l2) {
    if (l1 == NULL) return l2;   // If first list is empty, return the second list
    if (l2 == NULL) return l1;   // If second list is empty, return the first list

    // Recursively merge the two lists
    if (l1->data < l2->data) {   // If l1's data is smaller, l1 will be the head of the merged list
        l1->next = merge_lists(l1->next, l2);
        return l1;
    } else {                     // If l2's data is smaller, l2 will be the head of the merged list
        l2->next = merge_lists(l1, l2->next);
        return l2;
    }
}

// Pushes a new node to the front of the list
void push(node** head_ref, int new_data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = new_data;    // Set the data for the new node
    new_node->next = *head_ref;   // Make the new node point to the current head
    *head_ref = new_node;         // Update the head to the new node
}

// Prints the entire linked list
void print_list(node* head) {
    while (head != NULL) {        // Traverse the list
        printf("%d ", head->data); // Print the data in each node
        head = head->next;        // Move to the next node
    }
    printf("\n");
}
