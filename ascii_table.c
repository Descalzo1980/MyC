#include <stdio.h>

int main() {
    printf("ASCII codes for uppercase letters:\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c: %d\n", c, c);
    }

    printf("\nASCII codes for lowercase letters:\n");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c: %d\n", c, c);
    }

    return 0;
}
