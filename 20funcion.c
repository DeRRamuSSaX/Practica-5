// Escribir una funcion en C print_menu() que acepte como argumento un
// array de strings e imprima un menu en pantalla con las opciones de un
// menu usando los valores del array. Imprimir las opciones numeradas desde
// el uno en el orden que aparecen en el array.

#include <stdio.h>
#include <stdlib.h>

void print_menu() {
  printf("(1) Agregar Notas\n");
  printf("(2) Ver Notas\n");
  printf("(3) Borrar Notas\n");
  printf("(4) Salir\n");
};

void save_note() {
  FILE *fp;
  fp = fopen("notas.txt","a");
  printf("Ingrese su nota: ");
  char note[100];
  fgets(note, 100, stdin);
  fprintf(fp, "%s", note);
  fclose(fp);
  return;
};

void read_note() {
};

void delete_note() {
};

int main(int argc, char const *argv[]) {
  int choice;
  while (1) {
    print_menu();
    scanf("%d", &choice);
    getchar();
  }
  switch (choice) {
    case 1:
      save_note();
      break;
    case 2:
      read_note();
      break;
    case 3:
      delete_note();
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Opcion Desconocida\n");
      break;
  }
  return 0;
}

// NO ANDA MUY BIEN EN MI COMPU :(
