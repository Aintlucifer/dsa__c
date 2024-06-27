#include<stdio.h>
int main()
{
    int A[10],i,s=0,j,n,ub=9,lb=0,mid;
    for(i=0;i<10;i++)
    {
        printf("ENTER %dth no.",i);
        scanf("%d",&A[i]);
        
    }
    printf("ENTER ELEMENT WHICH YOU WANT TO SEARCH");
    scanf("%d",&n);
     mid=lb+(ub-lb)/2;
    
    while(lb<=ub)
   {
	   
	    if(A[mid]>n)
	    { 
	    	ub=mid-1;
	    }
	    else if(A[mid]<n)
	    {
	    	lb=mid+1;
	    }
	    else
	    {
	    	printf("ELEMENT FOUND AT %dth INDEX",mid);
	    	
	    	
	    }
        mid=lb+(ub-lb)/2;
   }
    return 0;
 }
 
