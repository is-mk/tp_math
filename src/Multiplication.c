//
// Created by theot on 13/04/2026.
//
#include<stdio.h>
#include<stdlib.h>
#include "../include/Multiplication.h"
#include <time.h>

int multiplication() {

    int a,b, nombr;
    int essaie = 0;
    int réponse = -1;
    //nombre de x que l'exercice souhaite etre fait

    printf("combien de fois souhaitez vous faire cet exercice? \n");
    scanf("%d", &nombr);

    for (int i = 0; i < nombr; i++) {

        srand(time(NULL));

        //génération de 2 entier entre 1 et 10
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        while (réponse != a * b) {
            //affichage
            printf("Quel est le résultat de la multiplication de ces 2 nombres ?\n");
            printf("%d x %d = ?", a, b);
            printf("\n Entrer votre réponse:\n");
            scanf("%d", &réponse);

            //Vérif
            if (réponse == a * b) {
                printf("%d est la bonne réponse.", réponse);
            }
            else {
                printf("faux\n");
                essaie ++;
            }
        }
    }
    return essaie;
}