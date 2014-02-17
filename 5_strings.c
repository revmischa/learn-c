// Basic string literals, initialization, manipulation

#include <stdio.h>
#include <string.h>

int main() {
  // initialize a character string variable that holds six chars
  // with the ASCII values for 'H', 'E', 'L', 'L', 'O', '\0'
  char hello[6] = "Hello"; // includes NULL terminator

  printf("The character sequence \"%s\" is %i characters long.\n",
         hello, strlen(hello));

  // truncate the string by replacing the second element of the char
  // array with a NULL terminator
  hello[1] = 0;  // same as '\0', 0x00, NULL, etc..
   
  printf("The character sequence \"%s\" is %i characters long.\n",
         hello, strlen(hello));

  // remove all terminating NULLs, this is likely to end in pain and tears
  hello[1] = 'e';
  hello[5] = '.'
  puts(hello);

  return 0;
}
