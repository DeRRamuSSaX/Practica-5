// Escribir una funcion random(int a, int b) que devuelva un 
// entero aleatorio entre a y b.

#include <stdio.h>
#include <stdlib.h>

int rand_num(int a, int b) {
  int r = (rand() % (b - a)) + a;
  return r;
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d\n", rand_num(a,b));
  return 0;
}
