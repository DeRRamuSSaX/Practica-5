// Escribir una funcion en C validate(int input, int min, int max) que
// devuelva true si input esta entre min y max y false de lo contrario.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validate(int input, int min, int max) {
  if (input > min && input < max) return true;
  else                            return false;
}

int main(void) {
  int input = 3;
  int min = 2;
  int max = 5;
  printf("%d\n", validate(input,min,max));
  return 0;
}
