#include <stdio.h>

int main() {

    int compteur = 5; // tu peux changer la valeur ici (mais < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être < 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            // Affichage spécial selon la position
            if (i == 1) {
                printf("* ");
            }
            else if (i == 2 && j == 2) {
                printf("* ");
            }
            else if (i == 3 && j == 2) {
                printf("# ");
            }
            else if (i == 4 && j > 1 && j < 4) {
                printf("# ");
            }
            else {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}
