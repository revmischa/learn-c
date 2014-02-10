// Demonstrate the use of printing formatted data

#include <stdio.h>  // provides printf()

int main() {
  printf("Formatted string: '%s'\n", "separate string");
  printf("Numeric digit: %d, floating-point digit: %f\n", 2, 3.14);
  printf("Signed integer: %i, unsigned integer: %u\n", -1, -1);

  return 0; // success
}
