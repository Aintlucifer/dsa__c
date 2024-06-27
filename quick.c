#include <stdio.h>
void swap(int a, int b, int arr[]) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(i, j, arr);
        }
    }
    swap(i + 1, high, arr);
    return i + 1;
}
void quickSort(int arr[],int low,int high) {
    if(low<high) 
    {
        int pivot;
        pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
void display(int arr[], int size) {
    for (int i = 0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    quickSort(arr,0,n-1);
    printf("Sorted array: ");
    display(arr, n);

    return 0;
}
