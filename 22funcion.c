// Escribir una funcion en C que devuelva el resultado de b(a la n)
// siendo b y n argumentos de la funcion.

#include <stdio.h>
#include <stdlib.h>

int num_pow(int b, int n) {
  int a = b;
  while (1 < n) {
    a = a * b;
    n--;
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int b = atoi(argv[1]);
  int n = atoi(argv[2]);
  printf("%d\n", num_pow(b,n));
  return 0;
}
