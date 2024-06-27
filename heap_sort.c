#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

// Node structure to describe basic node structure
struct LinkedListNode {
    int data;
    struct LinkedListNode *next;
};

// Function to create a new node
struct LinkedListNode* createNode(int value) {
    struct LinkedListNode* newNode = (struct LinkedListNode*)malloc(sizeof(struct LinkedListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
struct LinkedListNode* insertNode(struct LinkedListNode* head, int value) {
    if (head == NULL) {
        return createNode(value);
    }
    struct LinkedListNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = createNode(value);
    return head;
}

// Function to print the elements of the linked list
void printList(struct LinkedListNode* head) {
    struct LinkedListNode* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to heapify
void heapify(struct LinkedListNode* arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].data > arr[largest].data) {
        largest = left;
    }

    if (right < n && arr[right].data > arr[largest].data) {
        largest = right;
    }

    if (largest != i) {
        struct LinkedListNode temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

// Function to perform heap sort
void heapSort(struct LinkedListNode* head) {
    int size = 0;
    struct LinkedListNode* current = head;
    while (current != NULL) {
        size++;
        current = current->next;
    }

    struct LinkedListNode* arr = (struct LinkedListNode*)malloc(size * sizeof(struct LinkedListNode));
    current = head;
    for (int i = 0; i < size; i++) {
        arr[i] = *current;
        current = current->next;
    }

    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    for (int i = size - 1; i > 0; i--) {
        struct LinkedListNode temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }

    current = head;
    for (int i = 0; i < size; i++) {
        current->data = arr[i].data;
        current = current->next;
    }

    free(arr);
}

// Driver code
int main() {
    // Create a linked list
    struct LinkedListNode* head = NULL;
    head = insertNode(head, 4);
    head = insertNode(head, 10);
    head = insertNode(head, 3);
    head = insertNode(head, 5);
    head = insertNode(head, 1);

    printf("Linked List before sorting: ");
    printList(head);

    // Perform heap sort
    heapSort(head);

    printf("Linked List after sorting: ");
    printList(head);

    return 0;
}
