//
// Created by theot on 16/04/2026.
//
#include <stdio.h>
#include "../include/menu.h"

int menu() {
    int choix;
    float a, b;

    do {
        printf("+-----------------------------------+\n");
        printf("|1 : Addition                       |\n");
        printf("|2 : Soustraction                   |\n");
        printf("|3 : Multiplication                 |\n");
        printf("|4 : Tables des multiplications     |\n");
        printf("|5 : Division                       |\n");
        printf("|0 : Sortir du jeu                  |\n");
        printf("+-----------------------------------+\n");
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("Entrez deux nombres : ");
                scanf("%f %f", &a, &b);
                printf("Resultat = %.2f\n\n", a + b);
                break;

            case 2:
                printf("Entrez deux nombres : ");
                scanf("%f %f", &a, &b);
                printf("Resultat = %.2f\n\n", a - b);
                break;

            case 3:
                printf("Entrez deux nombres : ");
                scanf("%f %f", &a, &b);
                printf("Resultat = %.2f\n\n", a * b);
                break;

            case 4: {
                int n;
                printf("Table de multiplication de : ");
                scanf("%d", &n);
                for(int i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", n, i, n * i);
                }
                printf("\n");
                break;
            }

            case 5:
                printf("Entrez deux nombres : ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    printf("Resultat = %.2f\n\n", a / b);
                else
                    printf("Erreur : division par 0 !\n\n");
                break;

            case 0:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide !\n\n");
        }

    } while(choix != 0);

    return 0;
}