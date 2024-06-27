#include <stdio.h>
#include <stdlib.h>

int* merge(int arr[], int lb, int mid, int ub) {
    //int* b = (int*)malloc((ub - lb + 1) * sizeof(int)); // Allocate memory dynamically for temporary array
    int b[100];
    int i = lb;
    int j = mid + 1;
    int k = 0; // Index for temporary array b

    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= ub) {
        b[k] = arr[j];
        j++;
        k++;
    }

    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

    // Copy elements from temporary array b back to arr
    for (int i = 0; i< k; i++) {
        arr[lb + i] = b[i];
    }

    //free(b); // Free dynamically allocated memory
    return arr + lb;
}

void mergesort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = lb + (ub - lb) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

