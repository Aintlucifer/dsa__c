#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER VALUE OF A AND B\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("value of a=%d and value of b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping value of a=%d and value of b=%d\n",a,b);
    
}
