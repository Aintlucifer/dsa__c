#include<stdio.h>
int main()
{
    int A[10],i,highest=0;
    for(i=0;i<10;i++)
    {
        printf("ENTER %dth no.",i);
        scanf("%d",&A[i]);
        if(highest<A[i])
        {
     	   highest=A[i];
     	}
    }
    printf("HIGHEST = %d",highest);
    return 0;
}
