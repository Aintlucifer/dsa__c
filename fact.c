#include<stdio.h>
int fact(int n)
{
    int prod=1,j;
   
   
    for(j=1;j<=n;j++)
   	{
	   	prod=prod*j;
	}
   
     printf("%d\n",prod);
    
    
   
 }
 int main()
{    	int n;
	printf("ENTER A NO TO FIND THE FACTORIAL ");
    	scanf("%d",&n);
    	if(n>=0)
    	{
    		fact(n);
    	}
    	else if(n==0)
    	{
    		printf("1");
    	}
    	else 
    	{
    		printf("INVALID INPUT");
    	}
    	
return 0;
}
    	
   
    
    

