#include <stdio.h>
#include <stdint.h> // pour uint32_t / uint64_t si nécessaire

// Fonction générique pour afficher les octets d'une variable en hex
void afficher_hex(void *ptr, size_t taille) {
    unsigned char *p = (unsigned char*)ptr;

    for (size_t i = 0; i < taille; i++) {
        printf("%02x", p[i]); // affichage des octets en hexadécimal
    }
}

int main() {

    // --- Déclaration des variables ---
    char c = 'A';
    short s = 12345;
    int i = 456789;
    long l = 987654321;
    long long ll = 123456789012345;
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.234567890123456789L;

    // --- Pointeurs vers ces variables ---
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("===== AVANT MANIPULATION =====\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc);
    afficher_hex(pc, sizeof(char)); printf("\n");

    printf("Adresse de s  : %p, Valeur : ", (void*)ps);
    afficher_hex(ps, sizeof(short)); printf("\n");

    printf("Adresse de i  : %p, Valeur : ", (void*)pi);
    afficher_hex(pi, sizeof(int)); printf("\n");

    printf("Adresse de l  : %p, Valeur : ", (void*)pl);
    afficher_hex(pl, sizeof(long)); printf("\n");

    printf("Adresse de ll : %p, Valeur : ", (void*)pll);
    afficher_hex(pll, sizeof(long long)); printf("\n");

    printf("Adresse de f  : %p, Valeur : ", (void*)pf);
    afficher_hex(pf, sizeof(float)); printf("\n");

    printf("Adresse de d  : %p, Valeur : ", (void*)pd);
    afficher_hex(pd, sizeof(double)); printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    afficher_hex(pld, sizeof(long double)); printf("\n\n");

    // ==========================================================
    //         MANIPULATION DES VALEURS AVEC LES POINTEURS
    // ==========================================================

    *pc = 'B';
    *ps += 1;
    *pi -= 1;
    *pl += 100;
    *pll -= 1000;
    *pf = 1.0f;
    *pd = 3.14;
    *pld = 2.5L;

    printf("===== APRES MANIPULATION =====\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc);
    afficher_hex(pc, sizeof(char)); printf("\n");

    printf("Adresse de s  : %p, Valeur : ", (void*)ps);
    afficher_hex(ps, sizeof(short)); printf("\n");

    printf("Adresse de i  : %p, Valeur : ", (void*)pi);
    afficher_hex(pi, sizeof(int)); printf("\n");

    printf("Adresse de l  : %p, Valeur : ", (void*)pl);
    afficher_hex(pl, sizeof(long)); printf("\n");

    printf("Adresse de ll : %p, Valeur : ", (void*)pll);
    afficher_hex(pll, sizeof(long long)); printf("\n");

    printf("Adresse de f  : %p, Valeur : ", (void*)pf);
    afficher_hex(pf, sizeof(float)); printf("\n");

    printf("Adresse de d  : %p, Valeur : ", (void*)pd);
    afficher_hex(pd, sizeof(double)); printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    afficher_hex(pld, sizeof(long double)); printf("\n");

    return 0;
}
