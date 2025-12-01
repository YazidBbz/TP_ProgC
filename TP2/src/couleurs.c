#include <stdio.h>

// Structure représentant une couleur au format RGBA
struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha
};

int main() {

    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xaa, 0x33, 0x88, 0xff},
        {0x90, 0x10, 0x10, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x33, 0x66, 0x99, 0xff},
        {0x12, 0x34, 0x56, 0xff},
        {0xf0, 0xf0, 0xf0, 0xff}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("=== Couleur %d ===\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].r);
        printf("Vert  : %u\n", couleurs[i].g);
        printf("Bleu  : %u\n", couleurs[i].b);
        printf("Alpha : %u\n\n", couleurs[i].a);
    }

    return 0;
}
