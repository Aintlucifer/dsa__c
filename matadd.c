#include <stdio.h>

int main() 
{
    int m, n, i, j;
    int m1[10][10], m2[10][10], s[10][10];

    printf("Enter the number of rows and columns of matrices: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            s[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}

