#include <stdio.h>
#include <math.h>

int main() {
  double x, y, S;
  long double a = 0.L, R;
  int k = 0;
  printf("\n");iz
  printf("Ludzu ievadiet argumentu x:");
  scanf("%lf", &x);

  
  a = 1.L;
  S = a;
  printf("a0 = %.5Lf\n", a);
  printf("S0 = %.5f\n", S);

  
  for (k = 1; k <= 499; k++) {
    R = -pow(x, 2) / ((2*k) * (2*k-1)*4);
    a = a * R;
    S = S + a;
  }
  printf("a499 = %.10Lf\n", a);
  printf("S499 = %.10f\n", S*S);

  // Izrekina  a500 un  S500
  R = -pow(x, 2) / ((2*k) * (2*k-1)*4);
  a = a * R;
  S = S + a;
  printf("a500 = %.10Lf\n", a);
  printf("S500 = %.10f\n", S*S);

  // Izrekina funkcijas vertibu
  y = cos(x)*cos(x);
  printf("cos(%lf)*cos(%lf) = %lf \n", x, x, y);
  printf("\n");
  printf("                       500\n");
  printf("                      _ _ _\n");
  printf("                      \\             k     2k\n");
  printf("                       \\          (-1)  * x\n");
  printf("y = cos(x)*cos(x)   >              _____________\n");
  printf("                       /                  2k\n");
  printf("                      /_ _ _       (2k)! * 2\n");
  printf("                     k = 0\n");
  printf("\n");
  printf("Recurences reizinatajs:\n");
  printf("\n");
  printf("                  2\n");
  printf("                 -x\n");
  printf("            _____________\n");
  printf("           (2k) * (2k-1)*4\n");

  return 0;
}
