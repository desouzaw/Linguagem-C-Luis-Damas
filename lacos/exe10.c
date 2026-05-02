/**
 * Escreva um programa que solicite um número ao usuário até que o valor deste esteja entre os valores 1 e 100
 */

#include <stdio.h>

void main(void) {
   int value;
   
   do {
      printf("Informe um valor entre 1 e 100: ");
      if (!scanf("%d", &value)) {
         while (getchar() != '\n');
      }
   } while (value <= 0 || value >= 101);

   printf("Valor válido.\n");
}