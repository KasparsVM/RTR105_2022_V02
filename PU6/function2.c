#include <stdio.h>

void greet(char *name) {
  printf("Ar argumentu, %s!\n", name);
}

int main(void) {
  greet("bez return");
  greet("withouth return");
  return 0;
}
