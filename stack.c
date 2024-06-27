#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int top=-1;
int a[SIZE];
void push();
void pop();
void display();
void main()
{
	int ch;
	while(1)
	{
		printf("Enter 1 to push element in stack\n");
		printf("Enter 2 to pop element in stack\n");
		printf("Enter 3 to display element in stack\n");
		printf("Enter 4 for exit\n");
		printf("Enter your choice:");
		scanf("%d" , &ch);
		switch(ch)
		{
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		display();
		break;
		case 4:
		exit(1);
		break;
		default:
		printf("Invalid choice");
		break;
		}
	}
}
void push()
{
	int x;
	if(top== SIZE-1)
	{
		printf("\n overflow\n");
	}
	else
	{
	printf("Enter element:");
	scanf("%d",&x);
	top=top+1;
	a[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n underflow\n");
	}
	else
	{
		printf("\ndeleted item:%d\n",a[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
	printf("\no items in stack\n");
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n" ,a[i]);
		}
	}
}
		