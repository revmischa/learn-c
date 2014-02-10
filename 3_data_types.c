// Interrogate data type sizes

#include <stdio.h>

int main() {
  printf("Size of hello: %lu\n", sizeof("hello"));
  printf("Size of integer: %lu\n", sizeof(3));
  return 0;
}
