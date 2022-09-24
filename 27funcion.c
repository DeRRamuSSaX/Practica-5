// Escribir una funcion que calcule el producto punto entre
// dos vectores de dimension n.

#include <stdio.h>
#include <stdlib.h>

double point_prod(double vector1[], double vector2[]) {
  double total = 0.0;
  double res[3] = {0.0,0.0,0.0};
  for (int i = 0; i < 3; i++) {
    res[i] = vector1[i] * vector2[i];
  }
  for (int i = 0; i < 3; i++) {
    total += res[i];
  }
  return total;
}

int main(void) {
  double vector1[3] = {1.0,2.0,3.0};
  double vector2[3] = {4.0,5.0,6.0};
  printf("%.2f\n", point_prod(vector1,vector2));
  return 0;
}
