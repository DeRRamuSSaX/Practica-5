// Escribir una funcion en C que devuelva true si el string que acepta
// como argumento es palındromo.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palindrome(char *s) {
  int a = 0;
  while (s[a] != 0) {
    a++;
  }
  for (int i = 0; i < a/2; i++) {
    if (s[i] != s[a-1-i]) return false;
    else                  return true;
  }
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  printf("%d\n", is_palindrome(s));
  return 0;
}
