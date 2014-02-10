// Prints the string "Hello, world\n" to standard output

// Compile and link with:
// clang 1_hello.c -o 1_hello

// include standard C input/output library header file
#include <stdio.h>

// declaration for main entry point function
// returns application return status as an integer (0-127)
int main() {
  puts("Hello, world");  // put string, including newline
  return 0;  // application exit code (stored in $?)
}

