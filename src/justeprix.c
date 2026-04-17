//
// Created by islem on 13/04/2026.
//

#include "../include/justeprix.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int justeprix() {
    int essaie = 0;

    srand(time(NULL));

    int nombre = rand() % 100 + 1;
    int proposition = 101;

    while (nombre != proposition) {
        printf("Quelle est votre proposition ? (1-100)");
        scanf("%d", &proposition);

        if (proposition == nombre) {
            printf("Bravo vous avez trouvé le bon nombre !");
        } else {
            printf("Mauvaise réponse..");
            essaie++;
            if (nombre < proposition) {
                printf("Le nombre à trouver est plus bas.");
            } else {
                printf("Le nombre à trouver est plus haut.");
            }
        }
    }

    return essaie;
}