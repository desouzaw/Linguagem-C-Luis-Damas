/**
 * Escreva um programa em C que escreva na tela toda a tabela ASCII(0.255 chars), escrevendo em cada linha de código ASCII e o caractere correspondente.
 * Exemplo:
 * ...
 * 65 --> A
 * 66 --> B
 * 67 --> C
 * ...
 * A fim de que o usuário possa ver todos os caracteres escritos, a tela deve ser parada de 20 em 20 linhas, até que o usuário pressione a tecla 'c' ou 'C' seguida de <ENTER> para continuar a mostrar os próximos 20 caracteres (20 linhas).
 */

#include <stdio.h>

void main(void) {
   for (int i = 0; i <= 255; i++) {
      if (!(i % 20) && i) {
         char c;
         do {
            printf("Pressione a tecla c e aperte Enter para continuar a exibição: ");
            c = getchar();
            while (getchar() != '\n');
         } while (c != 'c' && c != 'C');
      }

      printf("%d --> %c\n", i, i);
   }
}