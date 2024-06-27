#include <stdio.h>
#include <ctype.h>
int main()
{
char grade,g;
printf("Enter a grade: "); 
scanf("%c",&g); 
switch (g)
{
	case '0':
	printf("The grade range is 91-100\n");
	break;
	case 'E' :
	printf("The grade range is 81-90\n");
	break;
	case 'A':
	printf("The grade range is 71-80\n");
	break;
	case 'B':
	printf("The grade range is 61-70\n");
	break;
	case 'C':
	printf("The grade range is 51-60\n");
	break;
	case 'D':
	printf("The grade range is 41-50\n");
	break;
	case 'F':
	printf("Failed");
	break;
	default:
	printf("Invalid grade");
}
return 0;
}
