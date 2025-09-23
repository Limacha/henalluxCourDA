#include <stdio.h>

void main(void)
{
    int numerateur, denominateur;
    printf("Numerateur : ");
    scanf("%d", &numerateur);
    printf("denominateur : ");
    scanf("%d", &denominateur);
    printf("%d/%d = %.4f = %d\n", numerateur, denominateur, (double)numerateur / denominateur, numerateur / denominateur);
}