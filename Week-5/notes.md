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
