#include <stdio.h>
void main(void)
{
    int nbEntier = 25;
    double nbReel = 25.5;

    printf("Entier : %d\n ", nbEntier);
    printf("Reel : %f\n ", nbReel);
    printf("Nombre entier : ");
    scanf("%d", &nbEntier);
    printf("Nombre reel (avec un .) : ");
    scanf("%lf", &nbReel);
    printf("Mois\tNombre de jours\n");
    printf("%-10s\t%-d\n", "Octobre", 31);
    printf("%-10s\t%-d\n", "Novembre", 30);
    printf("%-10s\t%-d\n", "Decembre", 31);
    printf("Les travailleurs belges ont en moyenne 35 jours de conges par an, ce qui fait 9.59 %% de l annee.");
}