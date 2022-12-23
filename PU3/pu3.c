#include <stdio.h>

int main()
{
    int num1, num2, num3;
    char order[10];

    printf("Ievadiet pirmo skaitli: ");
    scanf("%d", &num1);

    printf("Ievadiet otro skaitli: ");
    scanf("%d", &num2);

    printf("Ievadiet treso skaitli: ");
    scanf("%d", &num3);

    printf("Ievadiet secību pec kuras velaties kartot skaitlus (augosa vai dilstosa): ");
    scanf("%s", order);

    if (strcmp(order, "augosa") == 0)
    {
        // skaitlus sakartos augosa secibaa
        if (num1 > num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3)
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
    else if (strcmp(order, "dilstosa") == 0)
    {
        // sakartos skaitlus dilstosa seciba
        if (num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 < num3)
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
    else
    {
        printf("Nederigi simboli prieks secibas\n");
        return 1;
    }

    printf("Skaitli pēc prasitas secibas ir: %d %d %d\n", num1, num2, num3);

    return 0;
}
