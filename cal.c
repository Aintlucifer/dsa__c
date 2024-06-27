#include <stdio.h>
#include <ctype.h>
int main() {char grade;int N1, N2;
  printf("ENTER FIRST NO.");
  scanf("%d", &N1);
  printf("ENTER SECOND NO.");
  scanf("%d", &N2);
  printf("Enter + TO ADD - TO SUBTRACT * TO MULTIPLY / TO DIVIDE:");
  scanf(" %c", &grade);
  switch (grade) {
    case '+':printf("%d\n", N1 + N2);
      break;
    case '-':printf("%d\n", N1 - N2);
      break;
    case '*':printf("%d\n", N1 * N2);
      break;
    case '/': printf("%d\n", N1 / N2);
      break;
    default: printf("Invalid operator\n");
      break;
  }
  
  return 0;
}

