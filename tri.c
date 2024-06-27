#include<stdio.h>
void main()
{
 int i,j,n,c,f,k,g,p;
 	void pattern(int n)
	 {for(i=1;i<=n;i++)
	 {      
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2==0)
			{
				printf(" ");
			}
			else
			{
				printf("%d",f);
		            
			
			}
		
		}
			
		printf("\n");

	 }}
int main()
{int n;
 printf("ENTER NO. OF RESPECTIVE ROWS");
 scanf("%d",&n);
pattern(n);
}
	
