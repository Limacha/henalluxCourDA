#include <stdio.h>

void main(void)
{
    int longeurM, largeurM, fleurParM2, tailleM2;
    printf("longeur en m : ");
    scanf("%d", &longeurM);
    printf("longeur en m : ");
    scanf("%d", &largeurM);
    printf("quantiter par m^2 : ");
    scanf("%d", &fleurParM2);
    tailleM2 = longeurM * largeurM;
    printf("pour un terrin de %d m^2 avec %d fleur par m^2. Il vous faudra un total de %d fleurs", tailleM2, fleurParM2, tailleM2 * fleurParM2);
}