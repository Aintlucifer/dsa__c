#include<stdio.h>
int main()
{
    int A[10],i,n,c=0;
    printf("ENTER ELEMENT TO BE SEARCHED");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        printf("ENTER %dth no.",i);
        scanf("%d",&A[i]);
        if(A[i]==n)
        {
     	   c++;
     	}
    }
    if(c>0)
    {
    	printf("FREQUENCY OF ELEMENT FOUND IS %d",c);
    }
    else
    {
    	printf("ELEMENT NOT FOUND IN LIST"); 
    }
    return 0;
}
