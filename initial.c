#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char A[100],B[100];int i,s,size=0,v,c=0;
    printf("ENTER A WORD\n");
    scanf("%[^\n]%*c",A);
    B[0]=A[0];
    s=2;
    for(i=0;i<strlen(A);i++)
    {       
            
            if(isspace(A[i])!=0)
            {   
                strcat(B,".");
            	B[s]=A[i+1];
            	
            	s++;
            }
          
	   
     }
    
     printf("INITIALS  = %s",B);
     return 0;
}
