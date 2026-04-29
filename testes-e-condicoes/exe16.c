/**
 * Escreva um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou não igual a zero
 */

#include <stdio.h>

void main(void) {
   int x;

   printf("Informe um valor inteiro: ");
   scanf("%d", &x);

   if (x == 0)
      printf("O inteiro informado é igual a 0\n");
   else
      printf("O inteiro informado não é igual a 0\n");

   if (x)
      printf("O inteiro informado não é igual a 0\n");
   else
      printf("O inteiro informado é igual a 0\n");

   if (x != 0)
      printf("O inteiro informado não é igual a 0\n");
   else
      printf("O inteiro informado é igual a 0\n");

   if (x > -1 && x < 1)
      printf("O inteiro informado é igual a 0\n");
   else
      printf("O inteiro informado não é igual a 0\n");
}