#include<stdio.h>
int main()
{
     char A[100];int i,s=0;
    
    
    printf("ENTER A WORD\n");
    scanf("%s",A);
    for(i=0;i<=100;i++)
    {
    	if(A[i]=='\0')
    	{
    		s=i;
    		break;
    	}
    }
        
    
    
    printf("LENGTH = %d",s);
    return 0;
}
