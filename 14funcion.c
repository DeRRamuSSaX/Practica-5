// Escribir una funcion en C para intercambiar dos valores
// dentro de un array de enteros.

#include <stdio.h>
#include <stdlib.h>

void arr_swap(int array[], int i, int j) {
  int r = array[i];
  array[i] = array[j];
  array[j] = r;
}

int main(int argc, char *argv[]) {
  int array[] = {1,2,3,4,5};
  arr_swap(array,1,3);
  printf("array[1]: %d array[3]: %d\n", array[1], array[3]);
  return 0;
}
