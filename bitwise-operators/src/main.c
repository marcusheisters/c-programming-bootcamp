#include <stdio.h>
#include <stdlib.h>

int main() {

  /**
   * type:uint8_t
   *
   * A = 12 ---> 0000 1100
   * B = 5  ---> 0000 0101
   *
   * A & B  ---> 0000 0100 = 4
   * A | B  ---> 0000 1101 = 13
   * A ^ B  ---> 0000 1001 = 9
   * A << 1 ---> 0001 1000 = 24
   * A >> 1 ---> 0000 0110 = 6
   *
   */

  uint8_t a = 12;
  uint8_t b = 5;

  printf("A & B: %d\n", a & b);
  printf("A | B: %d\n", a | b);
  printf("A ^ B: %d\n", a ^ b);
  printf("A << 1: %d\n", a << 1);
  printf("A >> 1: %d\n", a >> 1);
  return EXIT_SUCCESS;
}
