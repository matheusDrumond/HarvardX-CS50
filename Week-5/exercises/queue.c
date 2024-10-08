#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct node {
    int data;                 // Data stored in the node
    struct node* next;        // Pointer to the next node
} node;

typedef struct queue {
    node* front;              // Pointer to the front of the queue
    node* rear;               // Pointer to the rear of the queue
    int size;                 // Current size of the queue
    int max_size;             // Maximum size reached by the queue
} queue;

// Function prototypes
queue* create_queue();        // Creates a new queue
void enqueue(queue* q, int value);  // Adds an element to the queue
int dequeue(queue* q);        // Removes an element from the queue

int main() {
    // Create a queue
    queue* q = create_queue();

    // Example operations
    enqueue(q, 10);               // Add 10 to the queue
    enqueue(q, 20);               // Add 20 to the queue
    printf("dequeued from queue: %d\n", dequeue(q));  // Remove element from queue (expected: 10)
    enqueue(q, 30);               // Add 30 to the queue
    printf("dequeued from queue: %d\n", dequeue(q));  // Remove element from queue (expected: 20)

    // Print maximum size reached by the queue
    printf("max queue size reached: %d\n", q->max_size);

    return 0;
}

// Other functions

// Creates an empty queue
queue* create_queue() {
    queue* q = (queue*)malloc(sizeof(queue));
    q->front = q->rear = NULL;    // Initially, the queue is empty
    q->size = 0;
    q->max_size = 0;
    return q;
}

// Adds an element to the rear of the queue
void enqueue(queue* q, int value) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = value;       // Set the data
    new_node->next = NULL;        // New node will point to NULL

    if (q->rear == NULL) {        // If the queue is empty
        q->front = q->rear = new_node;
    } else {
        q->rear->next = new_node; // Link the new node at the end of the queue
        q->rear = new_node;       // Update the rear pointer
    }
    q->size++;                    // Increment the queue size

    // Update max_size if needed
    if (q->size > q->max_size) {
        q->max_size = q->size;
    }
}

// Removes an element from the front of the queue
int dequeue(queue* q) {
    if (q->front == NULL) {       // Check if the queue is empty
        printf("queue underflow\n");
        return -1;
    }

    node* temp = q->front;        // Get the front node
    int value = temp->data;       // Store the data to return later
    q->front = q->front->next;    // Move the front pointer to the next node

    if (q->front == NULL) {       // If the queue becomes empty, update rear to NULL
        q->rear = NULL;
    }
    free(temp);                   // Free the memory of the removed node
    q->size--;                    // Decrement the queue size

    return value;                 // Return the dequeued value
}
