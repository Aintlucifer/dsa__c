#include <stdio.h>
#include <stdlib.h>

void input(int **arr, int n) {
    *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (*arr + i));
    }
}

void sort(int **arr, int n) {
    printf("Sorting the array...\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((*arr)[j] > (*arr)[j + 1]) {
                int temp = (*arr)[j];
                (*arr)[j] = (*arr)[j + 1];
                (*arr)[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int *arr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    input(&arr, n);
    sort(&arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr);

    return 0;
}

