#include<stdio.h>
int main()
{
    int A[10],i,s=0;float avg;
    for(i=0;i<10;i++)
    {
        printf("ENTER %dth no.",i);
        scanf("%d",&A[i]);
        s=s+A[i];
    }
    avg=(s/10);
    printf("AVERAGE = %f",avg);
    return 0;
}
