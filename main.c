#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;
    printf("Hello, World!\n");
    printf("*p = %d\n", p);
    printf("*p = %d\n", *p);
    printf("*x = %d\n", x);
    return 0;
}