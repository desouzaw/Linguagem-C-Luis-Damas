/**
 * Escreva um programa que coloque na tela meia árvore de natal com asteriscos. O número de ramos deverá ser introduzido pelo usuário.
 * 
 * Exemplos com 3, 4 e 5 ramos:
 *  *         *          *
 *  * *       * *        * *
 *  * * *     * * *      * * *
 *            * * * *    * * * *
 *                       * * * * *
 */

#include <stdio.h>

void main(void) {
   int size;

   printf("Qual o tamanho da árvore? ");
   scanf("%d", &size);

   for (int i = 1; i <= size; i++) {
      for (int j = 1; j <= i; j++)
         putchar('*');
      putchar('\n');
   }
}