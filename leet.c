#include<stdio.h>
#include<stdlib.h>
int reverse(int n){
    int i,s=0,r,q,n1;
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        n1=n1/10;
        s=r+s*10;
    }
    while(s%10==0)
    {
        s=s/10;
    }
    return s;

}
void main()
{
    int g;
    printf("ENTER THE NO.\n");
    scanf("%d",&g);
    if(-231 <= g <= 231 - 1)
    {
        exit;
    }
    printf("%d",reverse(g));
}