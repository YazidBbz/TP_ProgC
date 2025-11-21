#include <stdio.h>

int main() {

    // --- CHAR ---
    signed char sc = -100;
    unsigned char uc = 200;
    char c = 'A';

    // --- SHORT ---
    signed short ss = -32000;
    unsigned short us = 65000;
    short s = 12345;

    // --- INT ---
    signed int si = -2000000000;
    unsigned int ui = 4000000000U;
    int i = 123456789;

    // --- LONG ---
    signed long sl = -5000000000;
    unsigned long ul = 10000000000UL;
    long l = 987654321;

    // --- LONG LONG ---
    signed long long sll = -9000000000000000000LL;
    unsigned long long ull = 18000000000000000000ULL;
    long long ll = 1234567890123456789LL;

    // --- FLOAT ---
    float f = 3.14f;

    // --- DOUBLE ---
    double d = 2.718281828;

    // --- LONG DOUBLE ---
    long double ld = 1.234567890123456789L;

    // --- AFFICHAGE ---

    printf("=== CHAR ===\n");
    printf("signed char       : %d\n", sc);
    printf("unsigned char     : %u\n", uc);
    printf("char              : %c\n\n", c);

    printf("=== SHORT ===\n");
    printf("signed short      : %d\n", ss);
    printf("unsigned short    : %u\n", us);
    printf("short             : %d\n\n", s);

    printf("=== INT ===\n");
    printf("signed int        : %d\n", si);
    printf("unsigned int      : %u\n", ui);
    printf("int               : %d\n\n", i);

    printf("=== LONG INT ===\n");
    printf("signed long       : %ld\n", sl);
    printf("unsigned long     : %lu\n", ul);
    printf("long              : %ld\n\n", l);

    printf("=== LONG LONG INT ===\n");
    printf("signed long long  : %lld\n", sll);
    printf("unsigned long long: %llu\n", ull);
    printf("long long         : %lld\n\n", ll);

    printf("=== FLOAT ===\n");
    printf("float             : %f\n\n", f);

    printf("=== DOUBLE ===\n");
    printf("double            : %lf\n\n", d);

    printf("=== LONG DOUBLE ===\n");
    printf("long double       : %Lf\n\n", ld);

    return 0;
}
