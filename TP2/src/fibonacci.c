#include <stdio.h>

int main() {

    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int U0 = 0;
    int U1 = 1;

    // Affichage des premiers termes
    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    if (n >= 0) printf("%d ", U0);
    if (n >= 1) printf("%d ", U1);

    // Calcul et affichage des termes suivants
    for (int i = 2; i <= n; i++) {
        int Un = U0 + U1; // Un = Un-1 + Un-2

        printf("%d ", Un);

        // Mise à jour pour l'itération suivante
        U0 = U1;
        U1 = Un;
    }

    printf("\n");

    return 0;
}
