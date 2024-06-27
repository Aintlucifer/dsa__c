#include <stdio.h>

struct student {
	int reg,roll,age;
	char name[100];
};

int main()
{       int n,i;
	struct student arr[100];
        printf("ENTER NO. OF STUDENTS");
        scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{       
		printf("ENTER IN  REGISTRATION NO.\n");
		scanf("%d",&arr[i].reg);
		printf("ENTER ROLL\n");
		scanf("%d",&arr[i].roll);
		printf("ENTER  AGE\n");
		scanf("%d",&arr[i].age);
		printf("ENTER NAME\n");
		scanf(" %[^\n]%*c",arr[i].name);
	}
	
	
        for(i=0;i<n;i++)
	{
		printf("REGISTRATION NO.%d\n ROLL%d\n AGE%d\n NAME%s", arr[i].reg, arr[i].roll,arr[i].age,arr[i].name);
	}
	return 0;
}

