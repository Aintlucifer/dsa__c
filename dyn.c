#include <stdio.h>
#include <stdlib.h>

void input(int **arr, int n) {
    *arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (*arr + i));
    }
}

int main() {
    int n;
    int *arr = NULL;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    input(&arr, n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(arr + i));
    }
    
    free(arr); 
    
    return 0;
}

