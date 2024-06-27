#include<stdio.h>
int palin(int n)
{
    int n,r,s=0,copy=0;
    copy=n;
    while(n>0)
    {
    	r=n%10;
    	n=n/10;
    	s=s*10+r;
    }
    return n;
}
