#include <stdio.h>
#include "include/divisions.h"
#include "include/operations.h"
#include "include/justeprix.h"
#include "include/nombre.h"
#include "include/problemes.h"
#include "include/addition.h"
#include "include/soustraction.h"
#include "include/Multiplication.h"
#include "include/table_de_mutliplication.h"
#include "include/fichier.h"

int main(void) {
    int choix = -1;
    int point = 0;
    char nom[50];

    printf("Quel est votre nom d'utilisateur ? \n> ");
    scanf("%[^\n]", nom);

    sauvegarder_score("Islem", 800);

    while (choix != 0) {
        printf("+-----------------------------------+\n");
        printf("|1 : Addition                       |\n");
        printf("|2 : Soustraction                   |\n");
        printf("|3 : Multiplication                 |\n");
        printf("|4 : Tables des multiplications     |\n");
        printf("|5 : Divisions                      |\n");
        printf("|6 : Juste prix                     |\n");
        printf("|7 : Jeu des opérations             |\n");
        printf("|8 : Problèmes                      |\n");
        printf("|9 : Nombres                        |\n");
        printf("|10 : Tableau des score             |\n");
        printf("|0 : Sortir du jeu                  |\n");
        printf("+-----------------------------------+\n");
        printf("Quel est votre choix ?\n> ");
        scanf("%d", &choix);

        int essaie = -1;

        switch (choix) {
            case 1:
                // essaie = addition();
                break;
            case 2:
                // essaie = soustraction();
                break;
            case 3:
                // essaie = mulitplication();
                break;
            case 4:
                // essaie = jsp
                break;
            case 5:
                essaie = divisions();
                break;
            case 6:
                essaie = justeprix();
                break;
            case 7:
                // essaie = jeu_des_operations();
                break;
            case 8:
                essaie = problemes();
                break;
            case 9:
                essaie = nombre();
            case 10:
                charger_score();
                break;
            case 0:
                printf("Merci d'avoir essayer notre programme !\n");
                printf("Vous terminez notre jeu avec %d \n", point);
                break;
            default:
                printf("Ce nombre n'est pas valide, veuillez réessayer.\n");
        }

        switch (essaie) {
            case 0:
                printf("Bravo vous avez réussi en 1 essaie, vous gagnez 10 points\n");
                point = point +10;
                break;
            case 1:
                printf("Bravo vous avez réussi en 2 essaie, vous gagnez 5 points\n");
                point = point + 5;
                break;
            case -1:
                break;

            default:
                printf("Vous avez réussi en %d essaie, vous ne gagnez pas de points..\n", choix);
                break;
        }
    }
    sauvegarder_score(nom, point);
}