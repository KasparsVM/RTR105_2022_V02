#include <stdio.h>

int main(void) {
 
int num, i;
char char_factorial;
int int_factorial;
long long long_factorial;

// Jauta lietotajam ievadit decimalskaitli
printf("Ievadiet decimalskaitli: ");
scanf("%d", &num);

// Lietotajam uzdot jautajumu, kadu datu tipu izmantot
printf("Izvelieties datu tipu aprekinam (prieks char-c, priekš int-i, prieks long long-l): ");
char data_type[10];
scanf("%s", data_type);

char_factorial = 1;
int_factorial = 1;
long_factorial = 1;

// Izrekina faktorialu izmantojot for loop
for (i = 1; i <= num; i++) {
// Kludu parbaude
if (data_type[0] == 'c') {
if (char_factorial > 0 && char_factorial <= i) {
char_factorial *= i;
} else {
printf("Kluda: Nevar aprekinat faktorialu ar char datu tipu.\n");
break;
}
} else if (data_type[0] == 'i') {
if (int_factorial > 0 && int_factorial <= i) {
int_factorial *= i;
} else {
printf("Kluda: Nevar aprekinat faktorialu ar int datu tipu.\n");
break;
}
} else if (data_type[0] == 'l') {
long_factorial *= i;
}
}

// Izsniedz rezultatu
if (data_type[0] == 'c') {
printf("%d faktorials ir %d\n", num, char_factorial);
} else if (data_type[0] == 'i') {
printf("%d faktorials ir %d\n", num, int_factorial);
} else if (data_type[0] == 'l') {
printf("%d faktorials ir %lld\n", num, long_factorial);
} else {
printf("Izvelets nederigs datu tips.\n");
}

return 0;
}
