#include <stdio.h>
#include <stdlib.h>

int main() {

  char a = 'A';

  printf("a = %c\n", a);
  printf("a = %d\n", a);

  char b = 66;
  printf("b = %c\n", b);

  printf("Type in a char: ");
  char c = getchar();
  printf("You typed the letter %c\n", c);
  c = getchar();

  return EXIT_SUCCESS;
}
