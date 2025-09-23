#include <stdio.h>

#define HEURE_DEBUT 16
#define MINUTE_DEBUT 30
#define HEURE_FIN 2100
#define TARIF_HEURE 3
#define TEMPS_GRATUIT 15

void main(void)
{
    int heureDepartHHMM, heureDepart, minuteDepart, surplus, duree;
    float prix;

    do
    {
        printf("heure de depart (HHMM) : ");
        scanf("%d", &heureDepartHHMM);
    } while (heureDepartHHMM < HEURE_DEBUT * 100 + MINUTE_DEBUT);

    if (heureDepartHHMM > HEURE_FIN)
    {
        surplus = heureDepartHHMM - HEURE_FIN;
        heureDepartHHMM = HEURE_FIN;
    }

    heureDepart = heureDepartHHMM / 100;
    minuteDepart = heureDepartHHMM % 100;

    duree = (heureDepart - HEURE_DEBUT) * 60;

    duree += minuteDepart - MINUTE_DEBUT;

    prix = duree / 60 * TARIF_HEURE;
    if (duree % 60 > TEMPS_GRATUIT)
        prix += TARIF_HEURE;

    printf("Vous devez payer %.2f euros, car votre progeniture est reste de %dH%d a %dH%d pour une duree de %d ", prix, HEURE_DEBUT, MINUTE_DEBUT, heureDepart, minuteDepart, duree);
    (surplus > 0) ? printf("et est reste %dH%d en plus\n", surplus / 100, surplus % 100) : printf("\n");
}