#include <stdio.h>

int main() {
  int myNum = 10;
  
  if (myNum > 0) {
    printf("The value is a positive number.");
  } else if (myNum < 0) {
    printf("The value is a negative number.");
  } else {
    printf("The value is 0.");
  }

  // C Short Hand If...Else (Ternary Operator)
    // variable = (condition) ? expressionTrue : expressionFalse;
    int time = 20;
    char result = (time < 18) ? 'G' : 'B';
    printf("\n%c", result);
  
  return 0;
}