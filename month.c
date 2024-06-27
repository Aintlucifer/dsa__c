#include<stdio.h>
int main()
{
    int n;
    printf("ENTER month no.");
    scanf("%d",&n);
    if(n==2)
    printf("28");
    else if(n==4||n==6||n==9||n==11)
    printf("30");
    else
    printf("31");
    
    
    
}
