//
// Created by islem on 13/04/2026.
//

#include "../include/operations.h"

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int calcul(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '-':
            return a - b;
        default:
            return 0;
    }
}

int operations() {
    // ne prend pas en compte la priorité des * et /, bug à regler
    int a, b, c;
    int op;
    int objectif;
    int n1, n2, n3;
    char op1, op2;
    int a_trouver = 0;
    char expression_donner[50];
    int essaie = 0;


    srand(time(NULL));

    a = rand() % 10+1;
    b = rand() % 10+1;
    c = rand() % 10+1;

    op = rand() % 10;


    switch (op) {
        case 0: objectif = a + b + c;   break;
        case 1: objectif = a + c * b;   break;
        case 2: objectif = a * b + b;   break;
        case 3: objectif = a - b - c;   break;
        case 4: objectif = a * b - c;   break;
        case 5: objectif = a - c * b;   break;
        case 6: objectif = a * b * c;   break;
        case 7: objectif = a * b / c;   break;
        case 8: objectif = a / b * c;   break;
        case 9: objectif = a / b / c;   break;
        default: objectif = a * b - c;  break;
    }



    while (a_trouver == 0) {
        printf("Les chiffres sont %d, %d et %d\n", a, b, c);
        printf("Le résultat que vous recherchez est %d\n", objectif);
        printf("> ");

        scanf(" %49[^\n]", expression_donner);
        // supprime le strcspn qui ne sert plus à rien

        if (sscanf(expression_donner, "%d%c%d%c%d", &n1, &op1, &n2, &op2, &n3) != 5) {
            printf("Le format n'est pas bon. Utilisez le format suivant : 1+2+7 avec les opérateurs +, -, * et /.\n");
            essaie++;
            continue;
        }

        int res1 = calcul(n1, n2, op1);

        int res2 = calcul(res1, n3, op2);

        if (res2 == objectif) {
            a_trouver = 1;
            printf("Bravo tu as trouvé !\n");
        } else {
            printf("Le resultat n'est pas bon.. réésaie encore. \n");
            essaie++;
        }
    }
    return essaie;
}