// Librerías
#include <stdio.h>
#include <stdlib.h>

// Función principal
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
  printf("%c Programa 6.2 creado por: Avila Barba Erick Yahir %c\n", 175, 175);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175);

  // Solicitar numeros
  float a;
  float b;

  // Pedir datos
  printf("Favor de ingresar 2 n%cmeros con 3 decimales:\n", 163);
  scanf("%f %f", &a, &b);

  // Resultados
  float variable1 = 43 / b * b + 7.5 / 2 * a + 4 - b * a / 10.3;
  float variable2 = a - 12.2 / 5 + 4 - 18.6 / b - 2 + b / a + 1;
  float variable3 = -15 + a / b - 8.1 * b / a + 9 / b * b + 4;

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 2F"); // Asignar color

  // Imprimir mensajes
  printf("La operación que escogí es: R1 = 43 / b * b + 7.5 / 2 * a + 4 - b * "
         "a / 10.3\n");
  printf("Si a = %.3f y b = %.3f", a, b);
  printf("El resultado es: %.3f\n\n\n", variable1);

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 60"); // Asignar color

  // Imprimir mensajes
  printf(
      "La operación que escogí es: R2 = a - 12.2 / 5 + 4 - 18.6 / b - 2 + b / "
      "a + 1\n");
  printf("Si a = %.3f y b = %.3f", a, b);
  printf("El resultado es: %.3f\n\n\n", variable2);

  system("pause");    // Pausa en flujo de ejecución
  system("cls");      // Limpiar pantalla
  system("color 2F"); // Asignar color

  // Imprimir mensajes
  printf("La operación que escogí es: R3 = -15 + a / b - 8.1 * b / a + 9 / b * "
         "b + "
         "4\n");
  printf("Si a = %.3f y b = %.3f", a, b);
  printf("El resultado es: %.3f\n\n\n", variable3);

  return 0;
}
