// Escribir dos funciones que devuelvan el enesimo numero de Fibonacci.
// Escribir una de forma iterativa y otra recursiva.

#include <stdio.h>
#include <stdlib.h>

// ITERATIVA
int fibo(int n) {
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i <= n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  return fib[n];
}

// RECURSIVA
int fibo_r(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibo_r(n-1) + fibo_r(n-2);
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("Fibonacci: %d\n", fibo(n));
  printf("Fibonacci: %d\n", fibo_r(n));
  return 0;
}
