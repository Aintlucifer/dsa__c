#include <stdio.h>
#include <stdlib.h>

void merge(int l[], int r[], int arr[], int nl, int nr) {
    int i=0,j=0,k=0;
    
    while (i<nl && j<nr) 
    {
        if (l[i] <= r[j]) 
        {
            arr[k] = l[i];
            k=k+1;
            i=i+1;
        } else 
        {
            arr[k] = r[j];
            k=k+1;
            j=j+1;
        }
    }

    while(i<nl) 
    {
        arr[k]=l[i];
        k=k+1;
        i=i+1;
    }

    while (j<nr) 
    {
        arr[k]= r[j];
        k=k+1;
        j=j+1;
    }
}

void mergesort(int arr[], int n) {
    if (n<2)
        return;
    
    int mid = n/2;
    int l[mid];
    int r[n-mid];
    
    for (int i=0;i<mid;i++) 
    {
        l[i]=arr[i];
    }
    
    for (int i=mid;i<n;i++) 
    {
        r[i-mid]=arr[i];
    }
    
    mergesort(l, mid);
    mergesort(r, n - mid);
    merge(l, r, arr, mid, n - mid);
}

int main() {
    int n1;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE ARRAY\n");
    scanf("%d", &n1);
    int arr[n1];
    printf("ENTER THE ELEMENTS YOU WANT TO ENTER\n");
    for (int f = 0; f < n1; f++) {
        scanf("%d", &arr[f]);
    }
    mergesort(arr, n1);
    printf("SORTED ARRAY IS:\n");
    for (int f = 0; f < n1; f++) {
        printf("%d\n", arr[f]);
    }
    return 0;
}
