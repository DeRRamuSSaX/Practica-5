// Escribir una funcion en C para invertir el orden de un string.

#include <stdio.h>
#include <stdlib.h>

int word_count(char s[]) {
  int i = 0;
  while (s[i] != 0) {
    i++;
  }
  return i;
}

void word_reverse(char s[]) {
  int lenght = word_count(s);
  for (int i = 0; i < lenght/2; i++) {
    char r = s[i];
    s[i] = s[lenght-1-i];
    s[lenght-1-i] = r;
  }
  return;
}

int main(void) {
  char s[] = { "hola123" };
  word_reverse(s);
  printf("%s\n", s);
  return 0;
}
