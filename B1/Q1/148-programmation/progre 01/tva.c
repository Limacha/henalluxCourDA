#include <stdio.h>

void main(void)
{
    float prixHTVA, tauxTVA;
    int nbArticle;

    printf("Prix HTVA : ");
    scanf("%f", &prixHTVA);
    printf("Nombre d'articles : ");
    scanf("%d", &nbArticle);
    printf("Taux de TVA : ");
    scanf("%f", &tauxTVA);
    float prixTotalHTVA = nbArticle * prixHTVA;
    printf("A payer : %.2f euros pour vos %d article(s)", prixTotalHTVA + prixTotalHTVA * (tauxTVA / 100), nbArticle);
}