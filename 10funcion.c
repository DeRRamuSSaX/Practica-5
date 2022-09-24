// Escribir una funcion en C para pasar un string a minısculas.

#include <stdio.h>

void to_lower_case(char *s) {
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'A' || s[i] <= 'Z') {
      s[i] += 32;
    }
    i++;
  }
  printf("%s\n", s);
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  to_lower_case(s);
  return 0;
}
