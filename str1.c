#include <stdio.h>

struct student {
	int mar;
	char name[100];
};

int main()
{       int n,i,high=0,p;
	struct student arr[100];
	
	for(i=0;i<5;i++)
	{       
		printf("ENTER NAME\n");
		scanf("%s",arr[i].name);
		printf("ENTER  MARKS\n");
		scanf("%d",&arr[i].mar);
		if(high<arr[i].mar)
		{
			high=arr[i].mar;
			p=i;
		}
	}
	printf(" NAME: %s \n MARK: %d",arr[p].name,high);
	return 0;
}

