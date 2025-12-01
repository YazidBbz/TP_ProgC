#include <stdio.h>

int main() {

    int d = 0x10001000;   // Exemple : à modifier pour tester

    // Calcul des positions en partant de gauche sur 32 bits
    int bit4_position  = 31 - 3;   // 4ème bit à partir de la gauche
    int bit20_position = 31 - 19;  // 20ème bit à partir de la gauche

    // Extraction des bits avec le décalage + masque
    int bit4  = (d >> bit4_position) & 1;
    int bit20 = (d >> bit20_position) & 1;

    // Vérification des deux bits
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
