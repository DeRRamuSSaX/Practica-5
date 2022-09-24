// Escribir una funcion en C que devuelva la enesima potencia de dos.

#include <stdio.h>
#include <stdlib.h>

int num_pow(int n) {
  int a = 2;
  while (1 < n) {
    a = a * 2;
    n--;
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("%d\n", num_pow(n));
  return 0;
}
