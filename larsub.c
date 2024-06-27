#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char A[100],B,C[100];int i,j,size=0,v=0;
    printf("ENTER A PHRASE\n");
    scanf("%s",A);
    size=strlen(A);
    for(i=0;i<size;i++)
    {   
        B=A[i];    
        for(j=i+1;j<size;j++)
        {
		    if(B==A[j])
            {
                v=j-i-1;
                break;
            }
        }
    }
    printf("Large substring length = %d",v);
    return 0;
}