#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("===^^===");
  printf("Welcome to Decimal to Hex Converter\n");

  printf("Enter a number:\n");

  int number;
  scanf("%d", &number);

  printf("Decimal representation: %9d\n", number);
  printf("Converted to hexadecimal: %9X\n", number);
  printf("===^^===");

  return EXIT_SUCCESS;
}
