#include <stdio.h>
#include <string.h> // nécessaire pour strcpy

// Définition de la structure étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {

    // Tableau de 5 structures
    struct Etudiant etudiants[5];

    // Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Sofia");
    strcpy(etudiants[2].adresse, "3 Rue de Paris, Marseille");
    etudiants[2].note1 = 15.2;
    etudiants[2].note2 = 13.8;

    strcpy(etudiants[3].nom, "Moreau");
    strcpy(etudiants[3].prenom, "Yazid");
    strcpy(etudiants[3].adresse, "10 Avenue de Lyon, Toulouse");
    etudiants[3].note1 = 18.0;
    etudiants[3].note2 = 17.5;

    strcpy(etudiants[4].nom, "Bernard");
    strcpy(etudiants[4].prenom, "Nadia");
    strcpy(etudiants[4].adresse, "5 Chemin du Lac, Nice");
    etudiants[4].note1 = 13.5;
    etudiants[4].note2 = 14.7;

    // Affichage des données
    for (int i = 0; i < 5; i++) {
        printf("=== Etudiant.e %d ===\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prenom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1  : %.2f\n", etudiants[i].note1);
        printf("Note 2  : %.2f\n\n", etudiants[i].note2);
    }

    return 0;
}
