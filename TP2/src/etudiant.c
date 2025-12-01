#include <stdio.h>

int main() {

    // Tableaux pour les informations
    char noms[5][50] = {
        "Dupont",
        "Martin",
        "Durand",
        "Moreau",
        "Bernard"
    };

    char prenoms[5][50] = {
        "Alice",
        "Yazid",
        "Karim",
        "Sophie",
        "Nadia"
    };

    char adresses[5][100] = {
        "12 Rue des Fleurs, Paris",
        "45 Avenue de Lyon, Marseille",
        "8 Boulevard du Midi, Toulouse",
        "22 Rue Victor Hugo, Lille",
        "5 Chemin des Sources, Nice"
    };

    // Notes : Prog C et Système d'exploitation
    float progC[5] = { 14.5, 16.0, 12.0, 17.5, 13.5 };
    float systeme[5] = { 13.0, 15.5, 11.0, 18.0, 14.0 };

    // Affichage des informations pour les 5 étudiant.e.s
    for (int i = 0; i < 5; i++) {
        printf("=== Etudiant %d ===\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prenom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note C    : %.2f\n", progC[i]);
        printf("Note SE   : %.2f\n\n", systeme[i]);
    }

    return 0;
}
