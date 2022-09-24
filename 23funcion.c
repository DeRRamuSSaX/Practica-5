// Escribir dos funciones que devuelvan el MCD de dos enteros usando
// el algoritmo de Euclides. Escribir una de forma iterativa y otra recursiva.

#include <stdio.h>
#include <stdlib.h>

// ITERATIVA
int gcd(int a, int b) {
  int t;
  while (b != 0) {
    t = b;
    b = b % a;
    a = t;
  }
  return a;
}

// RECURSIVA
int gcd_r(int a, int b) {
  if (b == 0) return a;
  else        return gcd_r(b,b%a);
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d\n", gcd(a,b));
  printf("%d\n", gcd_r(a,b));
  return 0;
}
