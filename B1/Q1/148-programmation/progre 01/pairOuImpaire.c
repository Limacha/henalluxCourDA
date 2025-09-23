#include <stdio.h>

void main(void)
{
    int chiffre;
    printf("Nombre entier : ");
    scanf("%d", &chiffre);
    printf("%d est %s", chiffre, (chiffre % 2 == 0) ? "pair" : "impair");
}