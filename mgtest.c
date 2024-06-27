#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int lb, int mid,int ub )
{
	int i=lb;int j=mid+1;int k=0;int b[100];
	while(i<=mid&&j<=ub)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];i++;
		}
		else
		{
			b[k]=arr[j];j++;
		}k++;
	}
	while(i<=mid)
	{
		b[k]=arr[i];i++;k++;
	}
	while(j<=ub)
	{
		b[k]=arr[j];j++;k++;
	}
	for(int i=0;i<k;i++)
	{
		arr[i+lb]=b[i];
	}
}
void mergesort(int arr[],int lb, int ub )
{
	int mid;
	if(lb<ub)
	{
		mid=(ub+lb)/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}
int main()
{
	int n;int arr[100];
	printf("enter the number of elements you want to enter");
	scanf("%d",&n);
	printf("please enter the %d elements",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%dth element is %d\n",i+1,arr[i]);
	}
	return 0;
}
