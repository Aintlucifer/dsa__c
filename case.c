#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
     char A[100],B[100];int i,s=0;
    
    
    printf("ENTER A WORD\n");
    scanf("%[^\n]%*c",A);
   
    for(i=0;i<strlen(A);i++)
    {
	    if(isspace(A[i])==0)
	    {
		    if(isupper(A[i])==0)
		    {
		    	B[i]=toupper(A[i]);
		    }
		    else if(islower(A[i])==0)
		    {
		    	B[i]=tolower(A[i]);
		    }
		    
	     }
	     
	     
    }
    printf("NEW CASE CHANGED WORD IS %s",B);
    return 0;
}
