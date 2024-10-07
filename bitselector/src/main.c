#include <stdio.h>
#include <stdlib.h>

int main() {

  unsigned data = 0xABCD;
  unsigned n;
  unsigned m;

  scanf("%d", &n);
  printf("Select the second bit to start: \n");
  scanf("%d", &m);

  /**
   * 0b1111 = 15 = 2^4 - 1
   * 0b0111 = 7  = 2^3 - 1
   * 0b0011 = 3  = 2^2 - 1
   * 0b0001 = 1  = 2^1 - 1
   *
   * W = width of the bitmask in bits
   *
   * bitmask = 2^W - 1
   *
   * [0:1] --> W = 2 bits
   * [0:2] --> W = 3 bits
   * [n:m] --> W = m - n + 1
   *
   * 2^W = 1 << W
   *
   * bitmask = 2^W - 1 = (1 << W) -1
   * **/

  unsigned W = m - n + 1;
  unsigned bitmask = (1 << W) - 1;

  unsigned result = (data >> n) & bitmask;

  printf("Result: 0X%04X \n", result);

  return EXIT_SUCCESS;
}
