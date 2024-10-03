#include <stdio.h>
#include <stdlib.h>

int main() {

  const int moonlanding = 1969;
  const double speedOfLight = 299792458;
  const float pi = 3.142;
  const unsigned hexaDead = 0xDEADU;
  const unsigned hexaSecret = 51966U;

  printf("Moonlanding: %10d\n", moonlanding);
  printf("Moonlanding: %010d\n", moonlanding);

  printf("Speed of light: %.0f\n", speedOfLight);
  printf("Speed of light: %.3e\n", speedOfLight);

  printf("Pi: %.2f\n", pi);
  printf("Pi: %+.1e\n", pi);

  printf("HexaDead: %#X\n", hexaDead);
  printf("HexaDead: %6d\n", hexaDead);

  printf("HexaSecret: %x\n", hexaDead);

  return EXIT_SUCCESS;
}
