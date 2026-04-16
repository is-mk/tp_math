//
// Created by theot on 13/04/2026.
//

#include "../include/soustraction.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void soustraction() {
    int a, b, réponse, permu, nombr;

    //nombre de x que l'exercice souhaite etre fait
    printf("combien de fois souhaitez vous faire cette exercice? \n");
    scanf("%d", &nombr);
    for (int i = 0; i < nombr; i++) {
        //génération des 2 nombres
        a = rand() % 101;
        b = rand() % 101;

        // permu si néccessaire
        if (a < b) {
            permu = a;
            a =b;
            b = permu;
        }
        // affichage
        printf("Quel est le résultat de la soustraction de ces 2 nombres ?");
        printf("%d - %d = ?\n", a, b);
        printf("Entrer votre réponse:\n");
        scanf("%d", &réponse);

        //Vérif
        if (réponse == a - b) {
            printf("%d est la bonne réponse", réponse);
        }
        else {
            printf("Faux, la réponse était %d.", a - b);
        }
    }
}