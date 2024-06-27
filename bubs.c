 
 #include<stdio.h>
int main()
{
    int A[10],i,s=0,j,n;
    for(i=0;i<10;i++)
    {
        printf("ENTER %dth no.",i);
        scanf("%d",&A[i]);
        
    }
    n=10;
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
           if (A[j] > A[j + 1])
           {
              	s=A[j+1];
                A[j+1]=A[j];
                A[j]=s;
           }
        }
    }
    for(i=0;i<10;i++)
    {
        printf(" %dth no.is %d\n",i,A[i]);
       
        
    }
    return 0;
 }
