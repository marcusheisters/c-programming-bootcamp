#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  int number;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("The number must be positive! \n");
    return EXIT_FAILURE;
  }

  bool isEven = (number % 2 == 0) ? true : false;

  if (isEven) {
    printf("The number %d is even. \n", number);
  } else {
    printf("The number %d is odd. \n", number);
  }

  return EXIT_SUCCESS;
}
