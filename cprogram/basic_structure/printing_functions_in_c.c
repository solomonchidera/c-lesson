#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");

    puts("Hello, World!");

    char message[] = "Hello, World!";
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);
    }
    putchar('\n');

    return 0;
}
