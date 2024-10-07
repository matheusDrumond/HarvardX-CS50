#include <stdio.h>

// Define a node in the binary search tree (BST)
typedef struct node
{
    int value;             // The value of the node
    struct node *left;     // Pointer to the left subtree
    struct node *right;    // Pointer to the right subtree
} node;

// Function to search for a value in the BST
// Returns 1 if the value is found, 0 otherwise
int search(node *tree, int number)
{
    // Base case: If the tree is empty, the number is not found
    if (tree == NULL) 
    {
        return 0;
    }

    // If the number is less than the current node's value, search in the left subtree
    if (number < tree->value)
    {
        return search(tree->left, number);
    }
    // If the number is greater than the current node's value, search in the right subtree
    else if (number > tree->value)
    {
        return search(tree->right, number);
    }
    // If the current node's value matches the number, return 1 (found)
    else
    {
        return 1;
    }
}
