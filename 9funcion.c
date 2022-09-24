// Escribir una funcion en C para pasar un string a mayusculas.

#include <stdio.h>

void to_upper_case(char *s) {
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'a' || s[i] <= 'z') {
      s[i] -= 32;
    }
    i++;
  }
  printf("%s\n", s);
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  to_upper_case(s);
  return 0;
}
