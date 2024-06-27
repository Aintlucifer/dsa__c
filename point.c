#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;int *ptr;
	printf("enter the no of elements you want to insert");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr = arr;
	for(int i =0;i<n;i++)
	{
		printf("%d",*ptr);
		ptr++;
	}
	
	
}
