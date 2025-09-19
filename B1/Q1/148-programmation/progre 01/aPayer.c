#include <stdio.h>

void main(void)
{
    double toPay = 0;
    // toPay = 125.256;
    printf("Combient d'eurro voullez-vous?");
    scanf("%lf", &toPay);
    printf("Vous devez payer %f euros\n", toPay);
}