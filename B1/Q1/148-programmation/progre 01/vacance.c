#include <stdio.h>

void main(void)
{
    int nbJoursVacances = 27;
    int nbJoursVacancesEnsoleilles = 11;
    double prixVacancesParJour = 7.50;
    double budgetVacances = 300.00;
    double depensesParJourEnsoleilleEnVacances = 8.25;
    printf("Nombre de jours de vacances non ensoleilles : %d\n", nbJoursVacances - nbJoursVacancesEnsoleilles);
    printf("Prix total des vacances : %.2f\n", nbJoursVacances * prixVacancesParJour);
    printf("Nombre de jours de vacances autorises par le budget : %.2f\n", budgetVacances / prixVacancesParJour);
    printf("Prix correspondant aux jours de vacances ensoleilles : %.2f\n", prixVacancesParJour * nbJoursVacancesEnsoleilles);
    printf("Depenses totales pour les jours de vacances ensoleilles : %.2f\n", nbJoursVacancesEnsoleilles * depensesParJourEnsoleilleEnVacances);
    printf("Nombre de semaines entieres passees en vacances : %d\n", nbJoursVacances / 7);
    printf("Nombre de jours de vacances en plus des semaines entieres : %d\n", nbJoursVacances % 7);

    int heureDepartHHMM = 1427;
    int dureeVoyageEnMinutes = 134;

    printf("Heure de l'heure de depart : %d\n", heureDepartHHMM / 100);
    printf("Minutes de l'heure de depart : %d\n", heureDepartHHMM % 100);
    printf("Temps de trajet : %d h et %d min\n", dureeVoyageEnMinutes / 60, dureeVoyageEnMinutes % 60);
    printf("Nombre d'heures entieres dans la duree du voyage : %d\n", dureeVoyageEnMinutes / 60);
    printf("Nombre de minutes de voyage en plus des heures entieres :%d\n", dureeVoyageEnMinutes % 60);
    printf("Heure de l'heure d'arrivee : %d\n", (heureDepartHHMM / 100) + (dureeVoyageEnMinutes / 60));
    printf("Minutes de l'heure d'arrivee : %d\n", (heureDepartHHMM % 100) + (dureeVoyageEnMinutes % 60));

    printf("Il n'a jamais fait ensoleille durant les vacances : %s\n", (nbJoursVacancesEnsoleilles == 0) ? "vrai" : "faux");
    printf("Les vacances ont dure moins de 15 jours : %s\n", (nbJoursVacances < 15) ? "vrai" : "faux");
    printf("Il a fait ensoleille tous les jours des vacances : %s\n", (nbJoursVacances == nbJoursVacancesEnsoleilles) ? "vrai" : "faux");
    printf("Le budget n'est pas suffisant pour couvrir le prix des jours de vacances : %s\n", (budgetVacances < nbJoursVacances * prixVacancesParJour) ? "vrai" : "faux");
    printf("Le voyage dure moins de 2 heures : %s\n", (dureeVoyageEnMinutes < 2 * 60) ? "vrai" : "faux");
    printf("Le depart est prevu apres midi : %s\n", (heureDepartHHMM / 100 >= 12) ? "vrai" : "faux");
    printf("Le cout total des vacances (prix par jour + depenses des jours ensoleilles) depasse le budget : %s\n", (((nbJoursVacances - nbJoursVacancesEnsoleilles) * prixVacancesParJour) + (depensesParJourEnsoleilleEnVacances * nbJoursVacancesEnsoleilles) > budgetVacances) ? "vrai" : "faux");
    printf("Le cout moyen d'un jour de vacances n'atteint pas les 12 euros : %s\n", (prixVacancesParJour < 12) ? "vrai" : "faux");

    printf("Pourcentage de jours ensoleilles sur les vacances : %f\n", (double)nbJoursVacancesEnsoleilles / nbJoursVacances * 100);
}