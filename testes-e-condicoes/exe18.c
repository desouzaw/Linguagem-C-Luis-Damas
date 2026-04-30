/**
 * Escreva um programa que verifique se um ano é bissexto ou não
 */

#include <stdio.h>

void main(void) {
   int year;

   printf("Informe um ano: ");
   scanf("%d", &year);

   printf("%d %s um ano bissexto\n", year, !(year % 4) ? "é" : "não é");
}
