#include <stdio.h>

// Function to swap two elements using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array around a pivot element
int partition(int* arr, int low, int high) {
    int pivot = *(arr + high); // Choose the last element as the pivot
    int* i = arr - 1; // Initialize the pointer to the smaller element

    for (int* j = arr; j < arr + high; j++) {
        if (*j < pivot) {
            i++;
            swap(i, j);
        }
    }
    swap(i + 1, arr + high);
    return i - arr + 1;
}

// Function to perform quicksort on an array
void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1); // Sort the left subarray
        quickSort(arr, pi + 1, high); // Sort the right subarray
    }
}

// Function to print an array
void printArray(int* arr, int size) {
    for (int* i = arr; i < arr + size; i++) {
        printf("%d ", *i);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Array after sorting: ");
    printArray(arr, n);

    return 0;
}
