#include <stdio.h>

int main() {

    int n = 5;   // hauteur de la pyramide
    int i, j;

    // Génération de la pyramide
    for (i = 1; i <= n; i++) {

        // 1) Afficher les espaces pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Afficher les nombres croissants : 1, 12, 123, ...
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Afficher les nombres décroissants : 21, 321, 4321, ...
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4) Passer à la ligne suivante
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}

