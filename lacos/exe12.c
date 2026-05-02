/**
 * Escreva um programa completo em C que solicite ao usuário dois números inteiros entre 0 e 255 e escreva na tela todos os caracteres da tabela ASCII cujos códigos variem entre os dois números introduzidos, escrevendo em cada linha o código ASCII e o caractere correspondente.
 * 
 * Exemplos:
 * Introd. dois N°: 65 120
 * 65 --> A
 * 66 --> B
 * 67 --> C
 * 
 * Introd. dois N°: 120 65
 * 65 --> A
 * 66 --> B
 * 67 --> C
 */

#include <stdio.h>

void main(void) {
   int n1, n2;

   do {
      printf("Informe um número de 0 a 255: ");
      if (!scanf("%d", &n1))
         while (getchar() != '\n');
   } while (n1 < 0 || n1 > 255);

   do {
      printf("Informe outro número de 0 a 255: ");
      if (!scanf("%d", &n2))
         while (getchar() != '\n');
   } while (n2 < 0 || n2 > 255);

   if (n1 > n2) {
      int aux = n1;
      n1 = n2;
      n2 = aux;
   }

   for (int i = n1; i <= n2; i++)
      printf("%d --> %c\n", i, i);
}