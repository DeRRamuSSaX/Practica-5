// Escribir una funcion para imprimir un array de enteros en C.
// Aceptar como argumentos el array y su longitud.

#include <stdio.h>

int print_array(int a[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void) {
  int a[5] = {1,2,3,4,5};
  print_array(a,5);
  return 0;
}
