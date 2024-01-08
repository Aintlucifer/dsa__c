#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int bul(int a[])
{
    int b[4];int i,j,cows=0,bulls=0,c=0;
    for(i=0;i<4;i++)
    {
        printf("Guess the %d digit no. \t",i+1);
        scanf(" %d",&b[i]);
        if (b[i] < 0 || b[i] > 9)
        {
            printf("Invalid input. Please enter a digit between 0 and 9.\n");
            i--;
        }
    }
    for (i=0;i<4;i++)
    {
        if (a[i]==b[i]) 
        {
            bulls++;
            continue;
        }
        for(j=0;j<4;j++)
        {
            if(a[i]==b[j] && i!=j)
            {
                cows++;
                break;
            }
        }
    }
    printf("COWS-----BULLS\n");
    printf(" %d         %d\n",cows,bulls);
    return bulls;
}
int main()
{
    int i,a[4],f,c=0,k;
    srand(time(NULL));
    int ran = rand() % 9000+1000;
    printf("NO. is %d\n",ran);
    for(i=3;i>=0;i--)
    {
        a[i]=ran%10;
        ran=ran/10;
    }
   
    while(c<=10)
    {
        k=bul(a);
        c++;
        if(k==4)
        {
            printf("\nYeah,you are a champ :)\n");
            break;
        }
        else if(c==10)
        {
            printf("The no. is %d",ran);
            printf("\nSorry,you lose! :(\n");
            break;
        }
    }
}