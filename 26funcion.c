// Escribir tres funciones que devuelvan la suma de los
// primeros n numeros con n ∈ N. Escribir una version iterativa y una recursiva.

#include <stdio.h>
#include <stdlib.h>

// ITERATIVA
int num(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  return sum;
}

// RECURSIVA
int num_r(int n) {
  if (n == 0) {
    return 0;
  }
  return n + num_r(n-1);
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("Suma: %d\n", num(n));
  return 0;
}
