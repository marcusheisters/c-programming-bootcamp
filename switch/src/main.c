#include <stdio.h>
#include <stdlib.h>

int main() {

  char operator;
  double operandA, operandB, result;

  int error = 0;

  printf("Enter the operator: ");
  scanf("%c", &operator);

  printf("Enter the first operand: ");
  scanf("%lf", &operandA);

  printf("Enter the second operand: ");
  scanf("%lf", &operandB);

  switch (operator) {
  case '+':
    result = operandA + operandB;
    break;
  case '-':
    result = operandA - operandB;
    break;
  case '*':
    result = operandA * operandB;
    break;
  case '/':
    result = operandA / operandB;
    break;

  default:
    error = 1;
    break;
  }

  if (error) {
    printf("Error: Unknown operator. \n");
  } else {
    printf("%.1f %c %.1f = %.1f\n", operandA, operator, operandB, result);
  }
  return EXIT_SUCCESS;
}
