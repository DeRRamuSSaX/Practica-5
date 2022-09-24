// Escribir una funcion en C para intercambiar los valores
// de dos variables enteras.

#include <stdio.h>
#include <stdlib.h>

void num_swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main(int argc, char const *argv[]) {
  int a = 3;
  int b = 5;
  num_swap(&a,&b);
  printf("a: %d b: %d\n", a, b);
  return 0;
}
