#include<stdio.h>
#include<stdlib.h>
typedef struct item
{
	int index;
	int  profit;
	int weight;
	float pbyw;
	float xi; 
}item;
void bubblesort(item *arr,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j].pbyw<arr[j+1].pbyw)
			{
				item temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
float knaps(item* items,int n,int total)
{
	bubblesort(items,n);
	float  profit=0;int i=0;
	int takenweight=0;
	for(int i=0;i<n;i++)
	{
		if(takenweight + items[i].weight<=total)
		{
			profit=profit+items[i].profit;
			takenweight=takenweight + items[i].xi*items[i].weight;
			items[i].xi=1;
		}
		else
		{
			items[i].xi=((float)total- takenweight)/items[i].weight;
			takenweight += items[i].xi* items[i].weight;
			profit+=items[i].xi*items[i].profit;
			break;
		}
	}
	return profit;
}
int main()
{
	int i,n,total;
	printf("enter the number of items in your sack");
	scanf("%d",&n);
	printf("enter the total capacity of the knapsack");
	scanf("%d",&total);
	item *items =(item *)malloc(sizeof(item)*n);
	for(i=0;i<n;i++)
	{
		printf("enter itemid weight profit :");
		scanf("%d %d %d",&items[i].index,&items[i].weight,&items[i].profit);
		items[i].pbyw=(float)items[i].profit/items[i].weight;
	}
	float totalprofit = knaps(items,n,total);
	printf("TOTAL PROFIT =%f",totalprofit);
	return 0;
}
