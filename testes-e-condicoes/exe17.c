/**
 * Reescreva o programa anterior com um switch
 */

#include <stdio.h>

void main(void) {
   int x;

   printf("Informe um valor inteiro: ");
   scanf("%d", &x);

   switch (x) {
      case 0: 
         printf("O inteiro informado é igual a 0\n");
         break;
      default:
         printf("O inteiro informado não é igual a 0\n");
   }
}