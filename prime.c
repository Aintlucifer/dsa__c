#include<stdio.h>
int pr(int n)
{
    int s=0,c=0,i,j;
   
   for(i=2;i<=n;i++)
   {
   	for(j=1;j<=i;j++)
   	{
	   	if(i%j==0)
	   	{
	  		c++;
	  	}
	}
   
	
    if(c==2)
    {
    printf("%d\n",i);
    
    
    }
    c=0;
    }
 }
 int main()
{    	int n;
	printf("ENTER A NO BETWEEN 2 AND 200");
    	scanf("%d",&n);
    	if((n>=2)&&(n<=200))
    	{
    		pr(n);
    	}
return 0;
}
    	
   
    
    

