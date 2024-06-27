#include<stdio.h>
#include<stdlib.h>
//void display()
//{}
int rec(int n)
{
	 if (n == 0 || n == 1)
        return 1;
    	else
        return n * rec(n - 1);
}
int main()
{
	int n;int graph[100][100];
	printf("enter the number of vertices you want to enter");
	scanf("%d",&n);
	int f=rec(n)/(2*rec(n-2));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			graph[i][j]=0;
		}
	}
	
	for(int i=1;i<=f;i++)
	{
		int u,v,w;
		printf("enter the source vertex final vertex and the weight of the corresponding cut");
		scanf("%d  %d  %d",&u,&v,&w);
		graph[u][v]=w;
		graph[v][u]=w;
	}
	for(int i=1;i<=n;i++)
	{
		printf("|");
		for(int j=1;j<=n;j++)
		{
			printf("%d---",graph[i][j]);
		}
		printf("\n");
	}
	return 0;
}
