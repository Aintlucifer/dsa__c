#include <stdio.h>
#include <stdlib.h>

#define size 5 

int item[size];
int front = -1, rear = -1;

void enqueue() {
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        printf("Queue is full\n");
    } else {
        int x;
        printf("Enter element: ");
        scanf("%d", &x);
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        item[rear] = x;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("%d dequeued from the queue\n", item[front]);
        if (front == rear) {
            // Reset the queue when it becomes empty
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }
}

void display() {
    if (front == -1) {
        printf("No items\n");
    } else {
        int i = front;
        printf("Elements in the queue: ");
        do {
            printf("%d ", item[i]);
            if (i == rear)
                break;
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        printf("\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("Enter 1 to enqueue\n");
        printf("Enter 2 to dequeue\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
