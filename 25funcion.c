// Escribir dos funciones que devuelvan el factorial de un entero positivo n.
// Escribir una de forma iterativa y otra recursiva.

#include <stdio.h>
#include <stdlib.h>

// ITERATIVA
int fact(int n) {
  int res = 1;
  for (int i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}

// RECURSIVA
int fact_r(int n) {
  if (n == 0) {
    return 1;
  }
  return n * fact_r(n-1);
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("factorial de %d: %d\n", n, fact(n));
  printf("factorial de %d: %d\n", n, fact_r(n));
  return 0;
}
