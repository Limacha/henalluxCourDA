#include <stdio.h>

#define TAILLE_BOUTEILLE_CL 80

void main(void)
{
    int productionTotal;
    printf("production de cidre en L : ");
    scanf("%d", &productionTotal);
    printf("pour une production de %dL de cidre. Nous pouvons remplir %d bouteilles et il reste %dcl de cidre.", productionTotal, productionTotal * 100 / TAILLE_BOUTEILLE_CL, productionTotal * 100 % TAILLE_BOUTEILLE_CL);
}