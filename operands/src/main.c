#include <stdio.h>
#include <stdlib.h>

int main() {

  float a, b, c;

  printf("Enter operand A (float): \n");
  scanf("%f", &a);

  printf("Enter operand B (float): \n");
  scanf("%f", &b);

  c = a + b;
  printf("c = a + b --> %9.3f \n", c);
  printf("c = a + b --> %9.3f \n", c);

  c = a - b;
  printf("c = a - b --> %9.3f \n", c);

  c = a * b;
  printf("c = a * b --> %9.3f \n", c);

  c = a / b;
  printf("c = a / b --> %9.3f \n", c);

  return EXIT_SUCCESS;
}
