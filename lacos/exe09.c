/**
 * Altere o programa anterior de forma que, em vez de asteriscos, sejam escritas letras em cada nível, começando o nível inicial com a letra 'A'.
 * Exemplos com 3, 4 e 5 ramos
 *  A         A          A
 *  B B       B B        B B
 *  C C C     C C C      C C C
 *            D D D D    D D D D
 *                       E E E E E 
 */

#include <stdio.h>

void main(void) {
   int size;

   printf("Qual o tamanho da árvore? ");
   scanf("%d", &size);

   for (int i = 1; i <= size; i++) {
      for (int j = 1; j <= i; j++)
         putchar(65 + i - 1);
      putchar('\n');
   }
}