#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
     char A[100],B[100];int i,s=0,size=0;
    
    
    printf("ENTER A WORD\n");
    scanf("%[^\n]%*c",A);
    size=strlen(A);
    for(i=0;i<strlen(A);i++)
    {       
            s=size-i-1;
            
             printf("%c",B[i]);
	    B[i]=A[s];
     }
     
    printf("NEW REVERSED WORD IS %s",B);
   
    return 0;
}
