#include<stdio.h>
#include<stdlib.h>
void print(int p)
{
    if(p>0)
    {
        printf("%d",p);
    }
    else
    {
        exit(0);
    }
        p=p-1;
        print(p);
}
void main()
{
    print(9);
}

