//
// Created by theot on 13/04/2026.
//

#include "../include/table_de_multiplication.h"
#include <stdio.h>


int table_de_multiplication() {
    int essaie = 0;
    int t, réponse;

    //choix de la table

    do {
        printf("Choisissez la table que vous souhaitez apprendre (de 1 à 10)");
        scanf("%d", &t);
    } while (t < 1 || t > 10);

    printf("\n Table de %d \n", t);

    //affichage table

    for (int i = 1; i <= t; i++) {
        printf("%d x %d = %d \n", t, i, i * t);
    }

    //partie test ou quiz
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = ?",t, i);
        scanf("%d",&réponse);

        if (réponse != i * t) {
            essaie ++;
            printf("Mauvaise réponse.");
        }
        else {
            printf("Bonne réponse");
        }
    }
    return essaie;
}