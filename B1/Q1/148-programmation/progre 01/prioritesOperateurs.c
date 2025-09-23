#include <stdio.h>
#include <stdbool.h>

void main(void)
{
    printf("%d\n", 15 + 3 * 2);
    printf("%d\n", 3 * 4 % 5);
    printf("%d\n", 15 % 4 / 3);

    unsigned short val1 = 10 + 6 / 2;
    unsigned short val2 = 3 * 2 + 4 * 3;
    bool val3 = 2 <= 1 + 4;
    bool val4 = 2 + 1 != 3;
    unsigned short val5 = 24 + 36 % 12;

    printf("%d\n", val1);
    printf("%d\n", val2);
    printf("%s\n", (val3) ? "vrai" : "faux");
    printf("%s\n", (val4) ? "vrai" : "faux");
    printf("%d\n", val5);

    printf("Expression : %d - Attendue : 8\n ", (10 + 6) / 2);
    printf("Expression : %d - Attendue : 54\n ", 3 * (2 + 4) * 3);
    printf("Expression : %d - Attendue : 0\n ", (24 + 36) % 12);

    int a = 3;
    int b = 7;
    printf("Expression : %d - Attendue : 38\n ", a * 12 + b - 5);
    printf("Expression : %d - Attendue : 65\n ", 5 * a + 2 * (3 * b + 4));
    printf("Expression : %d - Attendue : 825\n ", 5 * (a + 2) * 3 * (b + 4));

    printf("%d\n ", 800 * 600);
    printf("%d\n ", 19410909 / 10000);
    printf("%d\n ", 19410909 / 100 % 100);
    printf("%d\n ", 19410909 % 100);
    printf("%.2f\n ", 25.7 + 24.8 + 32.4);
    printf("%.2f\n ", (25.7 + 24.8 + 32.4) / 3);
}