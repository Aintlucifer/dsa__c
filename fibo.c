#include<stdio.h>
int fib(int n)
{
    int i,a=0,b=1,s=0;
    
    if(n<0)
    {
    	printf("INVALID INPUT");
    }
   
    else
    {	
    	for(i=1;i<=n-2;i++)
    	{	
    		 if(i==1)
		  {
		    	printf("0\t");
		  }
		 else if(i==2)
		  {
		    	printf("1\t");
		  }
			
		  	s=a+b;
			printf("%d\t",s);
			a=b;
		  	b=s;
    	
    	}
    }
}
int main()
{
   int n;
   printf("ENTER N UPTO WHICH YOU WANT TO PRINT THE FIBONACCI SERIES\n");
   scanf("%d",&n);
   fib(n);
    
}
