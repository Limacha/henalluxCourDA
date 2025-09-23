#include <stdio.h>

#define PRIX_PLACE_ADULTE 6.5
#define PRIX_PLACE_ENFANT 5.5

void main(void)
{
    int nbPlaceAdulte = 0;
    int nbPlaceEnfant = 0;
    printf("Nombre de places adultes : ");
    scanf("%d", &nbPlaceAdulte);
    printf("Nombre de places enfant : ");
    scanf("%d", &nbPlaceEnfant);

    printf("Prix total : %.2f euros", nbPlaceAdulte * PRIX_PLACE_ADULTE + nbPlaceEnfant * PRIX_PLACE_ENFANT);
}