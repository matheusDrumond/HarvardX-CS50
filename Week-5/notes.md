# Week 5 - Data Structures

## Introduction to Data Structures

In Week 5, we explore key data structures such as arrays, queues, stacks, and linked lists. Understanding how to use these structures is essential in organizing and managing data efficiently, which is crucial in programming. We’ll discuss how each structure works, how to implement them in C, and their typical use cases.

## FIFO - Queues

A **queue** is a **FIFO** (First In, First Out) data structure. This means that the first element added to the queue is the first one to be removed, just like a line of people waiting for a service.

### Enqueue (Add to Queue)

The **enqueue** operation adds an element to the end of the queue.

```c
void enqueue(int queue[], int *rear, int element, int size) {
    if (*rear == size - 1) {
        printf("Queue is full\n");
    } else {
        (*rear)++;
        queue[*rear] = element;
    }
}
```

### Dequeue (Remove from Queue)

The **dequeue** operation removes an element from the front of the queue.

```c
int dequeue(int queue[], int *front, int *rear) {
    if (*front > *rear) {
        printf("Queue is empty\n");
        return -1;
    } else {
        int element = queue[*front];
        (*front)++;
        return element;
    }
}
```

## LIFO - Stacks

A **stack** is a **LIFO** (Last In, First Out) data structure, meaning the last element added is the first one to be removed. This is like a stack of plates where the last one placed on top is the first to be taken off.

### Push (Add to Stack)

The **push** operation adds an element to the top of the stack.

```c
void push(int stack[], int *top, int element, int size) {
    if (*top == size - 1) {
        printf("Stack is full\n");
    } else {
        (*top)++;
        stack[*top] = element;
    }
}
```

### Pop (Remove from Stack)

The **pop** operation removes the element from the top of the stack.

```c
int pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        int element = stack[*top];
        (*top)--;
        return element;
    }
}
```

## Arrays

An **array** is a collection of elements of the same type stored in contiguous memory locations. Arrays are indexed, with each element accessible by its index, starting from 0.

```c
int arr[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array of integers

printf("%d\n", arr[2]); // Access and print the element at index 2 (Output: 30)
```

Arrays are efficient for accessing elements by index but are not dynamic, meaning their size is fixed once declared.

## Linked Lists

A **linked list** is a dynamic data structure where each element (node) points to the next node in the list. Unlike arrays, linked lists can grow or shrink as needed.

### Defining a Node with C Structs

Each element in a linked list is called a **node**. In C, a node is typically defined using a `struct`, which contains data and a pointer to the next node.

```c
typedef struct node {
    int data;
    struct node *next;
} node;
```

### The `->` Operator

The `->` operator is used to access members of a struct when using pointers. For example, to access the `data` field of a node pointed to by `n`:

```c
node *n = malloc(sizeof(node));
n->data = 10; // Use the -> operator to access the data member
n->next = NULL; // Set the next pointer to NULL
```

Linked lists are useful for dynamic memory management but can be less efficient than arrays for accessing elements by index because you must traverse the list to find an element.

## Trees

A **tree** is a hierarchical data structure consisting of nodes connected by edges. It starts with a root node and branches out into child nodes, forming a parent-child relationship.

### Basic Terms in Trees

-   **Node**: A single element in the tree that stores data.
-   **Root**: The top node of the tree, where the hierarchy starts.
-   **Parent**: A node that has one or more child nodes.
-   **Child**: A node that descends from another node (its parent).
-   **Leaf**: A node with no children (at the bottom of the tree).
-   **Subtree**: A smaller tree that is part of a larger tree.

### Binary Trees

A **binary tree** is a type of tree where each node can have at most two children (left and right).

## Binary Search Trees (BST)

A **binary search tree (BST)** is a special type of binary tree where the nodes are arranged in a specific order:

-   The left subtree of a node contains only nodes with values less than the node’s value.
-   The right subtree contains only nodes with values greater than the node’s value.

### Key Operations in BSTs

-   **Search**: Starting from the root, compare the target value with the current node. Move left if the value is smaller, right if it’s larger.
-   **Insertion**: Similar to search, but instead of stopping when a node is found, insert the value at the appropriate position as a leaf node.
-   **Deletion**: Remove a node, and rearrange the tree to maintain its properties.

### Example of Nodes and Leaves

-   A **node** in a BST represents an individual data point.
-   A **leaf** is a node with no children, representing the end of a branch.

## Dictionaries

In computer science, a **dictionary** is a data structure used to store key-value pairs. The key is unique, and the value is associated with that key.

Dictionaries are often implemented using **hash tables** for fast access.

### Hashing

**Hashing** is the process of converting a given key into a hash code, which determines where the value should be stored in the hash table.

-   A **hash function** takes a key and produces a hash code (an integer). The hash code is used as an index to store and retrieve values in a hash table.

### Collisions

A **collision** occurs when two keys produce the same hash code. Different strategies are used to handle collisions:

-   **Chaining**: Store multiple values at the same index using a linked list.
-   **Open Addressing**: Find another available slot in the hash table when a collision occurs.

## Tries (Prefix Trees)

A **trie** is a type of tree used to store strings, where each node represents a single character, and each path from the root to a leaf represents a word.

-   **Tries** are commonly used for efficient **prefix searching**, such as autocomplete systems.
-   Each level in a trie corresponds to a character in the word, and the depth of the node indicates its position in the word.

### Structure of a Trie

-   The **root** represents the start of the trie and is typically empty.
-   Each **node** in the trie contains links to child nodes representing subsequent characters in a word.
-   The **leaf nodes** represent the end of words, and often store additional information, such as whether a word is valid or not.

---

By mastering these concepts, you’ll gain a stronger understanding of data structures such as trees, stacks, queues, and linked lists, and how they are represented in memory. This knowledge will enhance your ability to implement efficient algorithms and manipulate data in more complex ways within your programs.
