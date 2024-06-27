#include<stdio.h>
#include<string.h>
int main()
{
     char A[100],B[100];int i,s=0;
    
    
    printf("ENTER A WORD\n");
    scanf("%[^\n]%*c",A);
    printf("ENTER ANOTHER WORD\n");
     scanf("%[^\n]%*c",B);
    strcat(A,B);
    printf("NEW WORD AFTER MERGING = %s",A);
    return 0;
}
