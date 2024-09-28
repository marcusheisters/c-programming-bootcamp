#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned students = 25U;
  unsigned long worldPopulation = 780112259455U;
  uint8_t count = UINT8_MAX;

  printf("%12u | Students in the classe\n", students);
  printf("%12lu | Number of people in the world\n", worldPopulation);
  printf("%12u | Count of something\n", count);
  count = count + 1;
  printf("%12u | Count of something\n", count);
  printf("%12d | INT32_MIN\n", INT32_MIN);
  printf("%12d | INT32_MAX\n", INT32_MAX);
  printf("%12u | UINT32_MAX\n", UINT32_MAX);

  return EXIT_SUCCESS;
}
