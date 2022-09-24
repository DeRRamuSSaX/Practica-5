// Escribir una funcion en C para comparar si dos strings son iguales.

#include <stdio.h>
#include <string.h>

int comparar(char s[], char c[]) {
  if (strcmp(s,c) == 0) printf("Son Iguales\n");
  else                  printf("No son Iguales\n");
}

int main(void) {
  char s[] = { "hola123" };
  char c[] = { "hola123" };
  comparar(s,c);
  return 0;
}
