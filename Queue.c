
#include <stdio.h>
#define size 5   // Maximum size of queue

int queue[size];
int front = -1, rear = -1;

// Function to add element (enqueue)
void enqueue(int value) {
    if (rear == size - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    }
    else {
        if (front == -1) front = 0; // first element
        queue[++rear] = value;
        printf("%d enqueued into queue\n", value);
    }
}

// Function to remove element (dequeue)
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to dequeue\n");
    } else {
        printf("%d dequeued from queue\n", queue[front++]);
    }
}

// Function to peek (see front element)
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

// Function to display queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
