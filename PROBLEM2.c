#include<stdio.h>
#include<stdlib.h>
int count(int curr,int n1)
{
    int r,s=0,c=0,q=0;
    while(n1>0)
    {
        r=n1%10;
        n1=n1/10;
        if(n1==0)
        {
            s=10-r;
            curr=10;
        }
       else if((r-curr)>0)
        {
            s=s+(r-curr);
            curr=r;
        }
        else if((r-curr)<0)
        {
            s=s+(curr-r);
            curr=r;
        }
        printf("%d\n",s);
    }
s=s+4;
return s;
}
 int main()
{  
    int n;int i;int arr[100];int p;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    // printf("ENTER THE NO. OF ENTITIES YOU WANT TO ENTER\n");
    // scanf("%d",&n);
      // printf("\n");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d\n",&arr[i]);
    // }
    p=count(1,1111);
    printf("%d",p);
return 0;
}
    	
   
    
    

