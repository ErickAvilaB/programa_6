// Librerías
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Asignar color
  system("color 3F");

  // Encabezado con marco
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175);
  printf("%c Programa 6.1 creado por: Avila Barba Erick Yahir %c\n", 175, 175);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175);

  // Números enteros positivos
  int a = 5;
  int b = 7;

  // Variables enteras
  int variable1 = 8 - a * a + 6 + 7 * b - b * 4 + 16;
  int variable2 = -4 + a * b + 10 - b * a - 20 * a + b;
  int variable3 = a - b * 5 + a * b + 2 - 11 + b - a * 3;

  // Imprimir mensajes
  printf(
      "La operación que escogí es: R1 = 8 - a * a + 6 + 7 * b - b * 4 + 16\n");
  printf("Si a = %i y b = %i\n", a, b);
  printf("El resultado es: %i\n\n\n", variable1);

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 2F"); // Asignar color

  // Imprimir mensajes
  printf("La operación que escogí es: R2 = -4 + a * b + 10 - b * a - 20 * a + "
         "b\n");
  printf("Si a = %i y b = %i\n", a, b);
  printf("El resultado es: %i\n\n\n", variable2);

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 60"); // Asignar color

  // Imprimir mensajes
  printf(
      "La operación que escogí es: R3 = a - b * 5 + a * b + 2 - 11 + b - a * "
      "3\n");
  printf("Si a = %i y b = %i\n", a, b);
  printf("El resultado es: %i\n\n\n", variable3);

  return 0;
}
