#include <stdio.h>
#include <stdlib.h>

int main() {

  enum months {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
  };

  enum months myFavouriteMonth = JUN;
  enum months myWorstMonth = NOV;

  printf("My favourite month is : %d\n", myFavouriteMonth);
  printf("My worst month is : %d\n", myWorstMonth);

  return EXIT_SUCCESS;
}
