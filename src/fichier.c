//
// Created by islem on 15/04/2026.
//

#include "../include/fichier.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

// Informations :
// Le format dans le fichier sera nom;score;date


int charger_score() {
    char nom[50];
    printf("Quel est l'utilisateur que vous rechercher ? \n> ");
    scanf("%s", nom);

    FILE *f = fopen("../score.txt", "r");
    if (f == NULL) {
        return 0;
    }

    char nom_fichier[50];
    int score;
    char date[50];

    // Cette ligne a été généré par IA, je n'arrivais pas à trouver de solution :
    while (fscanf(f, "%49[^;];%d;%49[^\n]\n", nom_fichier, &score, date) == 3) {
        if (strcmp(nom, nom_fichier) == 0) {
            printf("L'utilisateur %s a eu %d points le %s.\n", nom, score, date);
            fclose(f);
            return score;
        }
    }
    printf("L'utilisateur n'a pas été trouvé.");
    fclose(f);
    return 0;
}

void sauvegarder_score(char nom[], int score) {
    // Après des recherche, on ne peut pas modifier directement une ligne voulu, je vais donc passer par un fichier temporaire.
    FILE *f = fopen("../score.txt", "r");
    FILE *temp = fopen("../temp.txt", "w");

    char nom_fichier[50];
    int score_fichier;
    char date[50];
    int trouve = 0;

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char date_actuelle[50];
    strftime(date_actuelle, 50, "%Y-%m-%d %H:%M", tm);

    // On scan l'ancien fichier, si on trouve le nom voulu, on met à jour la ligne et on la réécris, sinon on la réécris tel quel.
    while (fscanf(f, "%49[^;];%d;%49[^\n]\n", nom_fichier, &score_fichier, date) == 3) {
        if (strcmp(nom, nom_fichier) == 0) {
            fprintf(temp, "%s;%d;%s\n", nom, score, date_actuelle);
            trouve = 1;
        } else {
            fprintf(temp, "%s;%d;%s\n", nom_fichier, score_fichier, date);
        }
    }
    fclose(f);

    if (!trouve) {
        fprintf(temp, "%s;%d;%s\n", nom, score, date_actuelle);
    }

    fclose(temp);

    remove("../score.txt");
    rename("../temp.txt", "../score.txt");
}