#include <stdio.h>

int main() 
{
    int m, n, i, j,i1, i2,o,p;
    int m1[10][10], m2[10][10], s[10][10];

    printf("Enter the number of rows and columns of 1st matrix: ");
    scanf("%d %d", &m, &n);
     printf("Enter the number of rows and columns of 2nd matrix: ");
    scanf("%d %d", &o, &p);
     if(n==o)
    {printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < o; i++) 
    {
        for (j = 0; j < p; j++) 
        {
            scanf("%d", &m2[i][j]);
        }
    }
    
    
	    printf("Product of matrices:\n");
	    for (i = 0; i < m; i++) 
	    {
		for (j = 0; j < p; j++) 
		{
		    
		      for (i2 = 0; i2 < n; i2++) 
		      {
		      
		    s[i1][i2] = m1[i][i2] * m2[i2][j] +   s[i1][i2] ;
		    printf("%d ", s[i][j]);
		}
		printf("\n");
	    
     	}
     }
     }
     else
     {
     	     printf("Multiplication Not Possible");
     }
    return 0;
}

