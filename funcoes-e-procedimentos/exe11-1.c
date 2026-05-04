/**
 * int isdigit(char c)
 * Verdade caso c seja um dígito. Falso, caso contrário
 */

#include <stdio.h>

int is_digit(char);

int main(void) {
   char c;

   puts("Informe um caractere:");
   c = getchar();
   if (is_digit(c))
      printf("É dígito\n");
   else
      printf("Não é dígito\n");

   return 0;
}

int is_digit(char c) {
   return c >= '0' && c <= '9';
}
