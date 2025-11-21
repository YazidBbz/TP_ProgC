#include <stdio.h>

int main() {

    int num1 = 10;
    int num2 = 3;
    char op = '&';   // Change cette valeur pour tester : + - * / % & | ~

    int resultat; // utilisé pour les opérations binaires ou arithmétiques

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erreur : division par 0 impossible.\n");
            } else {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par 0 impossible.\n");
            } else {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d (ET binaire)\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d (OU binaire)\n", num1, num2, resultat);
            break;

        case '~':  
            // L'opérateur ~ est unaire : il ne dépend que de num1
            resultat = ~num1;
            printf("~%d = %d (COMPLÉMENT binaire)\n", num1, resultat);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
    }

    return 0;
}


