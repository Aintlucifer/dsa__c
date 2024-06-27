// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
int sum(int n)
{
    int prod=0,j; float s,initial=0;
   
   
    for(j=1;j<=n;j++)
   	{
	   	initial=initial+3;
	   	s=(s+1/initial);
	   	
	   	
	}
   
     printf("%f\n",s);
}
 int main()
{    	int n;
	printf("ENTER TO FIND THE SUM UPTO NTH TERM OF SERIES 1/3 + 1/6 + 1/9 +.. ");
    	scanf("%d",&n);
    	if(n>0)
    	{
    		sum(n);
    	}
    	
    	else 
    	{
    		printf("INVALID INPUT");
    	}
    	
return 0;
}
    	
   
    
    
