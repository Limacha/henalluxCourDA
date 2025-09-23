#include <stdio.h>

void main(void)
{
    int nombre1, nombre2, swap;
    printf("Nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Nombre 2 : ");
    scanf("%d", &nombre2);
    printf("Avant echange :\n");
    printf("nombre1 = %d\n", nombre1);
    printf("nombre2 = %d\n", nombre2);
    swap = nombre1;
    nombre1 = nombre2;
    nombre2 = swap;
    printf("apres echange :\n");
    printf("nombre1 = %d\n", nombre1);
    printf("nombre2 = %d\n", nombre2);
}