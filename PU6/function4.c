#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_greeting(char *name) {
  char *greeting = malloc(strlen(name) + 8 + 1);  
  sprintf(greeting, "Ar argumentu, %s!", name);
  return greeting;
}

int main(void) {
  char *greeting = get_greeting("ar return");
  printf("%s\n", greeting);
  free(greeting);

  greeting = get_greeting("with return");
  printf("%s\n", greeting);
  free(greeting);

  return 0;
}


