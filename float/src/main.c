#include <stdio.h>
#include <stdlib.h>

int main() {

  double decimalNumber = 1.23456789;

  double worldPopulation = 7.801E9;

  double plankConstant = 6.626E-34;

  printf("%12.1f | 1 decimal digit \n", decimalNumber);
  printf("%12.3f | 3 decimal digits \n", decimalNumber);

  printf("%12.1f | world population, 1 digit of precision \n", worldPopulation);
  printf(
      "%12.1e | world population, scientific notation, 1 digit of precision \n",
      worldPopulation);
  printf(
      "%12.3e | world population, scientific notation, 3 digit of precision \n",
      worldPopulation);

  printf(
      "%12.1e | plank constant, scientific notation, 1 digit of precision \n",
      plankConstant);
  printf(
      "%12.3e | plank constant, scientific notation, 3 digit of precision \n",
      plankConstant);

  return EXIT_SUCCESS;
}
