//
// Created by islem on 13/04/2026.
//

#include "../include/nombre.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int nombre() {
    int essaie = 0;
    int a_trouver =0;

    int nombres[100] = {
        1,2,3,4,5,6,7,8,9,10,
        11,12,13,14,15,16,17,18,19,20,
        21,22,23,24,25,26,27,28,29,30,
        31,32,33,34,35,36,37,38,39,40,
        41,42,43,44,45,46,47,48,49,50,
        51,52,53,54,55,56,57,58,59,60,
        61,62,63,64,65,66,67,68,69,70,
        71,72,73,74,75,76,77,78,79,80,
        81,82,83,84,85,86,87,88,89,90,
        91,92,93,94,95,96,97,98,99,100
        };

    char *nombres_lettres[100] = {
        "un","deux","trois","quatre","cinq","six","sept","huit","neuf","dix",
        "onze","douze","treize","quatorze","quinze","seize","dix-sept","dix-huit","dix-neuf","vingt",
        "vingt et un","vingt-deux","vingt-trois","vingt-quatre","vingt-cinq","vingt-six","vingt-sept","vingt-huit","vingt-neuf","trente",
        "trente et un","trente-deux","trente-trois","trente-quatre","trente-cinq","trente-six","trente-sept","trente-huit","trente-neuf","quarante",
        "quarante et un","quarante-deux","quarante-trois","quarante-quatre","quarante-cinq","quarante-six","quarante-sept","quarante-huit","quarante-neuf","cinquante",
        "cinquante et un","cinquante-deux","cinquante-trois","cinquante-quatre","cinquante-cinq","cinquante-six","cinquante-sept","cinquante-huit","cinquante-neuf","soixante",
        "soixante et un","soixante-deux","soixante-trois","soixante-quatre","soixante-cinq","soixante-six","soixante-sept","soixante-huit","soixante-neuf","soixante-dix",
        "soixante et onze","soixante-douze","soixante-treize","soixante-quatorze","soixante-quinze","soixante-seize","soixante-dix-sept","soixante-dix-huit","soixante-dix-neuf","quatre-vingts",
        "quatre-vingt-un","quatre-vingt-deux","quatre-vingt-trois","quatre-vingt-quatre","quatre-vingt-cinq","quatre-vingt-six","quatre-vingt-sept","quatre-vingt-huit","quatre-vingt-neuf","quatre-vingt-dix",
        "quatre-vingt-onze","quatre-vingt-douze","quatre-vingt-treize","quatre-vingt-quatorze","quatre-vingt-quinze","quatre-vingt-seize","quatre-vingt-dix-sept","quatre-vingt-dix-huit","quatre-vingt-dix-neuf","cent"
        };


    srand(time(NULL));

    int choix = rand() % 100;

    char *choix_char = nombres_lettres[choix];
    int choix_int = nombres[choix];
    int proposition_utilisateur;



    while (a_trouver == 0) {
        printf("%s", choix_char);
        scanf("%d", proposition_utilisateur);
        if (proposition_utilisateur == choix_int) {
            printf("Bravo, tu as trouvé !");
            a_trouver = 1;
        } else {
            printf("Rééssaie !");
            essaie++;
        }
    }


    return essaie;
}