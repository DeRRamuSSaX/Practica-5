// Escribir una funcion que devuelva las raıces de una funcion cuadratica.
// Devolver NaN si no hay raıces reales.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double roots(double a, double b, double c) {
  //codigo que aplica la formula de la cuadratica
  double discriminant = b*b - 4*a*c;
  double root = sqrt(discriminant);
  double x1 = (-b + root) / (2*a);
  double x2 = (-b - root) / (2*a);
  return x1;
}

int main(void) {
  double a = 1;
  double b = 0;
  double c = -3;
  printf("%.2f\n", roots(a, b, c));
  return 0;
}

// NI IDEA DE COMO SE HACE, LO COPIE DEL PROFE :(
