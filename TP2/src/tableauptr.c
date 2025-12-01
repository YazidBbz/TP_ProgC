#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int TAILLE = 11;

    int tab_int[TAILLE];
    float tab_float[TAILLE];

    srand(time(NULL));  // initialisation du random

    // ----------------------------
    //   Remplissage des tableaux
    // ----------------------------
    int *p_int = tab_int;
    float *p_float = tab_float;

    for (int i = 0; i < TAILLE; i++) {
        *(p_int + i) = rand() % 150;            // valeurs aléatoires 0-149
        *(p_float + i) = (rand() % 1000) / 100.0; // valeurs aléatoires 0.00 à 9.99
    }

    // ----------------------------------
    //   Affichage AVANT modification
    // ----------------------------------
    printf("Tableau d'entiers (AVANT) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de floats (AVANT) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n\n");

    // ---------------------------------------------------
    //   Multiplication ×3 pour les indices divisibles par 2
    //   UNIQUEMENT AVEC DES POINTEURS
    // ---------------------------------------------------
    for (int i = 0; i < TAILLE; i++) {

        if (i % 2 == 0) {  // indice divisible par 2
            *(p_int + i) *= 3;
            *(p_float + i) *= 3.0f;
        }
    }

    // ---------------------------------
    //   Affichage APRES modification
    // ---------------------------------
    printf("Tableau d'entiers (APRES) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de floats (APRES) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n");

    return 0;
}
