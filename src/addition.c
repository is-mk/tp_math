//
// Created by theot on 13/04/2026.
//
#include "../include/addition.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void addition() {

    // ici on va initialiser le générateur aléatoire
    srand(time(NULL));

    int a,b, réponse;

    //on génère les 2 nombres qu'on utilisera pour la question
    a = rand() % 101;
    b = rand() % 101;

    // partie affichage
    printf("Quel est le résultat de l'addition de ses 2 nombres ?\n");
    printf("%d + %d = ?", a, b);
    printf("\n Entrer votre réponse:\n");
    scanf("%d", &réponse);

    //vérification
    if (réponse == a + b) {
        printf("%d est la bonne réponse.", réponse);
    }
    else {
        printf("faux, la bonne réponse était %d \n", a + b);
    }
    printf("Que souhaitez vous faire ? \n");

}