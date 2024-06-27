#include<stdio.h>
int arm(int n)
{
    int r,s=0,copy=0;
    copy=n;
    while(n>0)
    {
    	r=n%10;
    	n=n/10;
    	s=s+r*r*r;
    }
    if(copy==s)
    {
    printf("ARMSTRONG NO.");
    }
    else
    {
    printf("NOT ARMSTRONG NO.");
    }
}
int main()
{   int n;
    printf("ENTER  no.");
    scanf("%d",&n);
    if(n>0)
    {
    arm(n);
    }
return 0;
}
    
    
    

