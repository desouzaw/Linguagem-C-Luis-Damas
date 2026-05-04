/**
 * int isalpha(char c)
 * Verdade caso c seja uma letra do alfabeto, maiúscula ou minúscula. Falso, caso contrário
 */

#include <stdio.h>

int is_alpha(char);

int main(void) {
   char c;

   puts("Informe um caractere:");
   c = getchar();
   if (is_alpha(c))
      printf("É uma letra do alfabeto\n");
   else
      printf("Não é uma letra do alfabeto\n");

   return 0;
}

int is_alpha(char c) {
   return c >= 'a' && c <= 'z' ||
          c >= 'A' && c <= 'Z';
}