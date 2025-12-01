#include <stdio.h>

int main() {

    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    int longueur = 0;

    // -------------------
    // 1) Calcul de longueur de chaine1
    // -------------------
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    // -------------------
    // 2) Copie de chaine1 dans copie
    // -------------------
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // terminer la chaîne

    printf("Copie de chaine1 : %s\n", copie);

    // -------------------
    // 3) Concaténation de chaine1 + chaine2 dans concat
    // -------------------

    // Copier chaine1 dans concat
    i = 0;
    int j = 0;
    while (chaine1[i] != '\0') {
        concat[j] = chaine1[i];
        i++;
        j++;
    }

    // Ajouter chaine2 à la suite
    i = 0;
    while (chaine2[i] != '\0') {
        concat[j] = chaine2[i];
        i++;
        j++;
    }

    concat[j] = '\0'; // terminer la chaîne

    printf("Concaténation : %s\n", concat);

    return 0;
}
