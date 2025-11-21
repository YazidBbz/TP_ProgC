#include <stdio.h>

void afficherBinaire(int n) {

    // On affiche 32 bits (taille standard d’un int)
    printf("%d en binaire = ", n);

    // Parcours des bits du plus significatif au moins significatif
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;   // Décalage + AND
        printf("%d", bit);

        // Juste pour rendre joli (groupes de 4 bits)
        if (i % 4 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {

    int valeurs[5] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < 5; i++) {
        afficherBinaire(valeurs[i]);
    }

    return 0;
}
