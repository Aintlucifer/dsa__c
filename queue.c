#include <stdio.h>
#include <stdlib.h>

#define size 5

int item[size];
int front = -1, rear = -1;

void enqueue() {
    if (rear == size - 1) {
        printf("Queue is full\n");
    } else {
        int x;
        printf("Enter element: ");
        scanf("%d", &x);
        if (front == -1) {
            front = 0;
        }
        rear++;
        item[rear] = x;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("No items\n");
    } else {
        for (int j = front; j <= rear; j++) {
            printf("%d\n", item[j]);
        }
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
