// Escribir una funcion que acepte tres argumentos enteros y devuelva true
// si los tres argumentos son iguales o false de lo contrario.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool num(int a, int b, int c) {
  if (a == b && b == c) return true;
  else                  return false;
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  printf("%d\n", num(a,b,c));
  return 0;
}
