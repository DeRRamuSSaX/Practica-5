// Escribir una funcion en C que devuelva el mınimo de un array de enteros.

#include <stdio.h>
#include <limits.h>

int arr_min(int array[], int lenght) {
  int min = INT_MAX;
  for (int i = 0; i < lenght; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int main(void) {
  int array[] = {1,2,3,4,5};
  int m = arr_min(array,5);
  printf("%d\n", m);
  return 0;
}
