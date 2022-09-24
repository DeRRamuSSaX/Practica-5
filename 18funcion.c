// Escribir una funcion en C que devuelva el promedio de un array de enteros.

#include <stdio.h>
#include <stdlib.h>

double arr_prom(int array[], int lenght) {
  int sum = 0;
  double prom;
  for (int i = 0; i < lenght; i++) {
    sum += array[i];
  }
  prom = sum / 2;
  return prom;
}

int main(void) {
  int array[] = {1,2,3,4,5};
  double m = arr_prom(array,5);
  printf("%.2f\n", m);
  return 0;
}
