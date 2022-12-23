#include <stdio.h>

int main(void) {
    long long num1, num2;

    printf("Ievadiet pirmo skaitli: ");
    while (scanf("%lld", &num1) != 1) {
        // ja ievadits jebkads cits simbols, kas nav numurs, jauta atkal numuru
        printf("Ludzu ievadit tikai un vienigi  numurus: ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Lūdz lietotājam ievadīt otro skaitli
    printf("Ievadiet otro skaitli: ");
    while (scanf("%lld", &num2) != 1) {
        printf("Ludzu ievadit tikai un vienigi numurus: ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Aprēķina divu skaitļu reizinājumu
    long long product = num1 * num2;

    // Izvada rezultātu
    printf("Skaitlu eizinajums ir: %lld\n", product);

    return 0;
}
