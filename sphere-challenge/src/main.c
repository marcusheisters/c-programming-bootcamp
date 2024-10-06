#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  double radius;
  printf("Enter the radius of the sphere: \n");
  scanf("%lf", &radius);

  double area = 4 * M_PI * radius * radius;
  double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

  printf("Radius: %.2f | Area: %.2f | Volume: %.2f\n", radius, area, volume);
  printf("Radius: %.3E | Area: %.3E | Volume: %.3E\n", radius, area, volume);

  return EXIT_SUCCESS;
}
