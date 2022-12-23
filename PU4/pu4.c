#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
  // Pieprasa lietotajam ievadit decimalciparu
  double num;
  printf("Ievadiet decimalskaitli: ");
  scanf("%lf", &num);

  // pieprasa lietotajam izveleties datu tipu
  char datatype;
  printf("Ievadiet datu tipu, ko izmantot (prieks char-c, prieks int-i, prieks long long-ll): ");
  scanf(" %c", &datatype);

  long long factorial = 1;

  // Aprekina dota skaitkla faktorialu izmantojot while loop
  while (num > 1) {
    // Parbauda vai ar izveleto datu tipu ir iespejams paeradit atbildi
    if (datatype == 'c' && factorial > CHAR_MAX) {
      printf("Kluda: char datu tips nav pietiekami liels, lai reprezentētu ievadita skaitla faktorialu.\n");
      break;
    }
    else if (datatype == 'i' && factorial > INT_MAX) {
      printf("Kluda: int datu tips nav pietiekami liels, lai reprezentetu ievadita skaitla faktorialu.\n");
      break;
    }
    else if (datatype == 'll' && factorial > LLONG_MAX) {
      printf("Kļūda: long long datu tips nav pietiekami liels, lai reprezentetu ievadita skaitla faktorialu.\n");
      break;
    }

    factorial *= (long long) num;
    num -= 1;
  }

  // uzrada izrekinato faktorialu
  printf("Ievadita skaitla faktorials ir: %lld\n", factorial);

  return 0;
}
