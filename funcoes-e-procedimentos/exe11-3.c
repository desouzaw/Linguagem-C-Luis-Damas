/**
 * int is_alnum(char c)
 * Verdade caso c seja um dígito ou uma letra do alfabeto. Falso, caso contrário
 */

#include <stdio.h>

int is_alnum(char);

int main(void) {
   char c;

   puts("Informe um caractere:");
   c = getchar();
   if (is_alnum(c))
      printf("É alfanumérico\n");
   else
      printf("Não é alfanumérico\n");

   return 0;
}

int is_alnum(char c) {
   return c >= 'a' && c <= 'z' ||
          c >= 'A' && c <= 'Z' ||
          c >= '0' && c <= '9';
}

