#include<stdio.h>
#include<stdlib.h>
void display(int **arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("| ");
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("|");
		printf("\n");
	}
}
int main()
{
	int n;
	printf("enter the number of vertices you want to enter");
	scanf("%d",&n);
	int **arr=(int**)malloc(n*sizeof (int*));
	for(int i=0;i<n;i++)
	{
			arr[i]=(int*)malloc(n*sizeof( int));
	}
	
	printf("enter 1 for adjacent vertices 0 for not");
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	display(arr,n);
	return 0;
}
