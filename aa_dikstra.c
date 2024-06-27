#include<stdio.h>
#include<stdlib.h>
void dik(int graph[10][10],int n,int start)
{
 	int cost[10][10],distance[10],pred[10],visited[10],count,mindistance,nextnode,i,j;
 	
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			if(graph[i][j]==0)
 			{
 				cost[i][j]=9999;
 			}
 			else
 			{
 				cost[i][j]=graph[i][j];
 			}
 		}
 	}
 	for(i=0;i<n;i++)
 	{
 		distance[i]=cost[start][i];pred[i]=start;visited[i]=0;
 	}
	distance[start]=0;visited[start]=1;count=1;
	while(count<n-1)
	{
		mindistance=9999;
		for(i=0;i<n;i++)
		{
			if(distance[i]<mindistance && visited[i]!=0)
			{
				mindistance=distance[i];nextnode=i;
			}
			
		}
		visited[nextnode]=1;
		for(i=0;i<n;i++)
		{
			if(!visited[i])
			{
				if(mindistance+cost[nextnode][i]<distance[i])
				{
					distance[i]=mindistance+cost[nextnode][i];
					pred[i]=nextnode;
				}
			}
		}count++;
	}
	for(i=0;i<n;i++)
	{
		if(i !=start)
			{
			printf("\ndistance from source to %d is %d",i,distance[i]);
			}
	}
}
void main()
{
	int n;int u,v,w;int graph[10][10];int x;int y;
	printf("enter the number of vertices you want to enter");
	scanf("%d",&n);
	printf("enter u for source vertex v for final vertex and w for corresponding weight");
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&u,&v,&w);
		graph[u][v]=w;graph[v][u]=w;
	}
	printf("enter starting vertex\n");
	scanf("%d", &y);
	dik(graph,n,y);
}
