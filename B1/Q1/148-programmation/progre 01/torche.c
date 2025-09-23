#include <stdio.h>

void main(void)
{
    int nbTorchesMax = 64;
    int nbTorchesSac = 42;
    int nbTorchesAFaire;
    nbTorchesAFaire = nbTorchesMax - nbTorchesSac;
    printf("Somme : %d\n", 2 + 3);
    printf("Vous devez refaire %d torches.\n", nbTorchesAFaire);
    printf("42 torches dans l inventaire et un maximum de 64 torches), le resultat de ce calcul %f %%\n", (double)nbTorchesSac / nbTorchesMax * 100);
    printf("Le nombre de torches maximum est atteint %s\n",
           nbTorchesSac == nbTorchesMax ? "vrai" : "faux");
    printf("Le nombre de torches maximum est atteint %s\n",
           nbTorchesSac != nbTorchesMax ? "faux" : "vrai");
    printf("Le nombre de torches dans l'inventaire depasse la moitie de la capacite maximale en torches : %s\n",
           nbTorchesSac <= nbTorchesMax / 2 ? "faux" : "vrai");
}