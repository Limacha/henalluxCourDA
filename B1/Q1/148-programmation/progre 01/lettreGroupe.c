#include <stdio.h>

void main(void)
{
    char groupLetter;
    groupLetter = 'c';
    printf("A quel groupe appartenez-vous? ");
    scanf("%c", &groupLetter);
    printf("Votre groupe est %c", groupLetter);
}