#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  int var = 0;

  printf("%lu\n", sizeof(var));
  printf("%lu\n", sizeof(int));
  printf("%lu\n", sizeof(long int));
  printf("%lu\n", sizeof(long long int));
  printf("%lu\n", sizeof(char));
  printf("%lu\n", sizeof(int16_t));
  printf("%lu\n", sizeof(int32_t));
  printf("%lu\n", sizeof(int64_t));
  printf("%lu\n", sizeof(123 && 456));
  printf("%lu\n", sizeof(123LL && 456LL));

  return EXIT_SUCCESS;
}
