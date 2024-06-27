#include<stdio.h>
int visited[10]={0}, graph[10][10], min, mingraph=0;

int rec(int num)
{
	if((num==1)||(num==0))
	{	return 1;}
	else
	{return num*rec(num-1);}
}
int input(int num)
{
	int i, j,u,v,w;
	int f=rec(num)/(2*rec(num-2));
	printf("\nEnter u for initial vertex v for final vertex and weight of the corresponding cut pekaboo!\n");
	for(i=1; i<=f; i++)
	{
		scanf("%d %d %d",&u,&v,&w);
		graph[u][v]=w;
		graph[v][u]=w;
	}
	return 0;
}
int display(int num)
{
	int i, j;
	printf("\nThe graph of adjacency matrix\n\n");
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			printf("%d", graph[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}

int prims(int num)
{
	int i, j, ne=1, a, b, u, v;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			if(graph[i][j]==0)
			graph[i][j]=999;
		}
	}
	visited[1]=1; 
	while(ne < num) 
	{
		for(i=1,min=999;i<=num;i++)
		for(j=1;j<=num;j++)
		if(graph[i][j]< min)
		if(visited[i]!=0)
		{
			min=graph[i][j];
			a=u=i; 
			b=v=j;
		}
		printf("\n Edge %d:(%d - %d) graph:%d",ne++,a,b,min);
 		mingraph=mingraph+min;
 		visited[b]=1;
		graph[a][b]=graph[b][a]=999;
	}
	printf("\n\n\n Minimun graph=%d",mingraph);
}
int main()
{
	int num;
	printf("\n\t\t\tPrim's Algorithm");
	printf("\n\nEnter the number of nodes= ");
	scanf("%d", &num);
	input(num);
	display(num);
	prims(num);
	return 0;
}
