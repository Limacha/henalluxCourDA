#include <stdio.h>

void main(void)
{
    int n = 7;
    int x = n++;
    printf("n: %d\n", n);
    printf("x: %d\n", x);
    n = 7;
    x = ++n;
    printf("n: %d\n", n);
    printf("x: %d\n", x);
}