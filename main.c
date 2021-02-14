#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* foo() {
    char *ch;
    ch = malloc(100);
    strcpy(ch, "Hello, World");

    strcat(ch, " #2!\n");

    return ch;
}

int main() {
    printf("Hello, World!\n");

    printf("%s", foo());
    return 0;
}