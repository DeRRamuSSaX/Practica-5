// Escribir una funcion en C para contar los caracteres en un string.

#include <stdio.h>

int char_count(char *s) {
  int i = 0;
  while (s[i] != 0) {
    i++;
  }
  return i;
}

int main(void) {
  char *s[] = { "hola123" };
  printf("Cantidad: %d\n", char_count(*s));
  return 0;
}
