// Escribir una funcion que busque un numero en un array de enteros y devuelva
// el ındice donde encontro el numero o -1 de lo contrario.

#include <stdio.h>
#include <stdlib.h>

int arr_ind(int array[], int lenght, int n) {
  for (int i = 0; i <= lenght; i++) {
    if (n == array[0])      return 0;
    else if (n == array[1]) return 1;
    else if (n == array[2]) return 2;
    else if (n == array[3]) return 3;
    else if (n == array[4]) return 4;
  }
  return -1;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int array[] = {1,2,3,4,5};
  printf("%d\n", arr_ind(array,5,n));
  return 0;
}
