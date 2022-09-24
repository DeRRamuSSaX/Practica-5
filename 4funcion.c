// Escribir una funci ́on llamada is_triangle() que acepte tres argumentos enteros.
// Devolver true si los tres argumentos pueden ser las longitudes A, B y C de
// un triangulo. De lo contrario devolver false.
// CONDICIONES: (a + b) > c, (b + c) > a, (a + c) > b.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c) {
  if ((a + b) > c && (b + c) > a && (a + c) > b) return true;
  else                                           return false;
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  printf("%d\n", is_triangle(a,b,c));
  return 0;
}
