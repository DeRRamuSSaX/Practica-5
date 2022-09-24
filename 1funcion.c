// Escribir una funcion saludar() que imprima un saludo en pantalla.

#include <stdio.h>
#include <stdlib.h>

void saludar(int n) {
  for (int i = 0; i <= n; i++) {
    printf("Hola\n");
  }
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  saludar(n);
  return 0;
}
