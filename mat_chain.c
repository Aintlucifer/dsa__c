#include <limits.h>
#include <stdio.h>
 
// Matrix Ai has dimension p[i-1] x p[i] 
// for i = 1 . . . n
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    // Place parenthesis at different places
    // between first and last matrix, 
    // recursively calculate count of multiplications 
    // for each parenthesis placement 
    // and return the minimum count
    for (k = i; k < j; k++) 
    {
        count = MatrixChainOrder(p, i, k)
                + MatrixChainOrder(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;
    }
 
    // Return minimum count
    return min;
}
 
// Driver code
int main()
{
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    int arr[n + 1]; // Array to store the dimensions of matrices

    printf("Enter the dimensions of %d matrices:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("Dimension %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Function call
    printf("Minimum number of multiplications is %d\n",
           MatrixChainOrder(arr, 1, n));

    return 0;
}

