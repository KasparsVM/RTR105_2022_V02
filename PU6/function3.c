#include <stdio.h>
#include <string.h>

char* get_greeting(void) {
  return "Bez argumenta un ar return";
}

int main(void) {
  char *greeting = get_greeting();
  printf("%s\n", greeting);
  return 0;
}
