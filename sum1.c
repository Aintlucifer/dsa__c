#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int prod=1,j; float S=0;
   
   
    for(j=1;j<=n;j++)
   	{
	   	S=S+1/pow(2,j);
	}
   
     printf("%f\n",S);
    
    
   
 }
 int main()
{    	int n;
	printf("ENTER TO FIND THE SUM UPTO NTH TERM OF SERIES 1/2 + 1/4 + 1/8 +.. ");
    	scanf("%d",&n);
    	if(n>0)
    	{
    		fact(n);
    	}
    	
    	else 
    	{
    		printf("INVALID INPUT");
    	}
    	
return 0;
}
    	
   
    
    

