// Escribir una funcion en C que devuelva el maximo de un array de enteros.

#include <stdio.h>
#include <limits.h>

int arr_max(int array[], int lenght) {
  int max = INT_MIN;
  for (int i = 0; i < lenght; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

int main(void) {
  int array[] = {1,2,3,4,5};
  int m = arr_max(array,5);
  printf("%d\n", m);
  return 0;
}
