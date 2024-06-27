#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char A[100],B[100],C[100];int i,j,s=0,size=0,v,c=0;
    printf("ENTER A SENTENCE\n");
    scanf("%[^\n]%*c",A);
    printf("ENTER THE PHRASE YOU WANT TO SEARCH\n");
    scanf("%[^\n]%*c",B);
    size=strlen(B);
    for(i=0;i<strlen(A);i++)
    {       
            for(j=0;j<size;j++)
            {
		    A[i+j]=tolower(A[i+j]);
		    C[j]=A[i+j];
            
            }
            C[size]='\0';
            s=strcmp(C,B);
            if(s==0)
            {
            	c++;
            }
    }
     
     printf("NO. OF PHRASES PRESENT = %d",c);
     return 0;
}
