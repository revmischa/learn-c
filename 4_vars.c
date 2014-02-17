// Demonstrate the use of variables

#include <stdio.h>

int main() {
    int i = 42;
    char hello[6] = "Hello"; // allocate an array of characters, 5 for "hello" + 1 null byte terminator
    char c = 'A';
    int exit_status;

    printf("Integer (i): %i\n", i);
    printf("String (hello): %s\n", hello);
    printf("Char (c): %c\n", c);
    printf("Integer (c): %i\n", c);

    c = 66;  // 66 = ASCII code for 'B'
    printf("Char (c): %c\n", c);

    exit_status = 0;
    return exit_status;    
}
