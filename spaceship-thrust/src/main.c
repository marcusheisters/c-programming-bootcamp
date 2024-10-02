#include <stdio.h>
#include <stdlib.h>

int main() {

  typedef enum {
    THRUST_NONE = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20
  } SpaceshipThrust;

  SpaceshipThrust level = THRUST_NONE;
  printf("Ready to go: %d\n", level);

  level = THRUST_MAXIMUM;
  printf("Take Off: %d\n", level);

  level = THRUST_MEDIUM;
  printf("Entering into Ionosphere: %d\n", level);

  level = THRUST_LOW;
  printf("Travelling to deep space: %d\n", level);
  return EXIT_SUCCESS;
}
