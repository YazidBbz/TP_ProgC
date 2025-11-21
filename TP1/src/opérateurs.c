#include <stdio.h>

int main() {

    int a = 16;
    int b = 3;

    // --- Opérateurs arithmétiques ---
    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b) : %d\n", a + b);
    printf("Soustraction (a - b) : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);
    printf("Division (a / b) : %d\n", a / b);   // division entière
    printf("Modulo (a %% b) : %d\n\n", a % b);

    // --- Opérateurs logiques / comparaisons ---
    printf("a == b : %d\n", a == b);   // 0 = faux, 1 = vrai
    printf("a > b  : %d\n", a > b);    // 1 attendu car 16 > 3

    return 0;
}
