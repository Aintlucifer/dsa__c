#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char A[100],B[100];int i,s=0,size=0,v,c=0;
    printf("ENTER A WORD\n");
    scanf("%[^\n]%*c",A);
    for(i=0;i<strlen(A);i++)
    {       
            A[i]=tolower(A[i]);
            if(isalpha(A[i])!=0)
            {
            	if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
            	{
            		v++;
            	}
            	else
            	{
            	
            		c++;
            	}
            }
            else if(isspace(A[i])!=0)
            {
            	s++;
            }
          
	   
     }
     printf("NO. OF VOWELS = %d",v);
     printf("NO. OF CONSONANTS = %d",c);
     printf("NO. OF SPACES = %d",s);
     return 0;
}
