#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  double r;
  printf("Enter the radius of the sphere: \n");
  scanf("%lf", &r);

  double area = 4 * M_PI * r * r;
  double volume = (4.0 / 3.0) * M_PI * pow(r, 3);

  printf("Radius: %.2f | Area: %.2f | Volume: %.2f\n", r, area, volume);
  printf("Radius: %.3E | Area: %.3E | Volume: %.3E\n", r, area, volume);

  return EXIT_SUCCESS;
}
