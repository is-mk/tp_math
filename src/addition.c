//
// Created by theot on 13/04/2026.
//
#include "../include/addition.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int addition() {

    // ici on va initialiser le générateur aléatoire
    srand(time(NULL));

    int a,b,nombr;
    int réponse = -1;
    int essaie = 0;

    //nombre de x que l'exercice souhaite etre fait

    printf("combien de fois souhaitez vous faire cet exercice? \n");
    scanf("%d", &nombr);
    for (int i = 0; i < nombr; i++) {
        //on génère les 2 nombres qu'on utilisera pour la question
        a = rand() % 101;
        b = rand() % 101;


        while (réponse != a + b) {
            // partie affichage
            printf("Quel est le résultat de l'addition de ces 2 nombres ?\n");
            printf("%d + %d = ?", a, b);
            printf("\n Entrer votre réponse:\n");
            scanf("%d", &réponse);

            //vérification
            if (réponse == a + b) {
                printf("%d est la bonne réponse.", réponse);
            }
            else {
                printf("faux\n");
                essaie ++;
            }
        }
    return essaie;
    }
}