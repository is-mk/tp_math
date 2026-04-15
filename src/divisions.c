//
// Created by islem on 13/04/2026.
//

#include "../include/divisions.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int divisions() {
    int a,b;
    int quotient, reste;
    int quotient_utilisateur, reste_utilisateur;
    int a_trouver = 0;
    int essaie = 0;

    srand(time(NULL));

    a = rand() % 100 +1;
    b = rand() % 9 +1;

    quotient = a / b;
    reste = a % b;

    while (a_trouver < 1) {

        printf("Divisie les nombres %d/%d", a, b);

        printf("Quel est le reste ?");
        scanf("%d", reste_utilisateur);

        printf("Quel est le quotient ?");
        scanf("%d", quotient_utilisateur);

        if (reste_utilisateur == reste & quotient_utilisateur == quotient) {
            a_trouver++;
        } else {
            printf("Vous avez fait une erreur, recommencez !");
            essaie++;
        }
    }
    return essaie;
}