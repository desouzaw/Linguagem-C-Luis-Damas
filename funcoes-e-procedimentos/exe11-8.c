/**
 * char toupper(char c)
 * Devolve o valor de caractere c transformado em maiúsculas
 */

#include <stdio.h>

char to_upper(char);

int main(void) {
   int c;

   puts("Informe um caractere:");
   c = getchar();
   putchar(to_upper(c));
   putchar('\n');

   return 0;
}

char to_upper(char c) {
   if (c >= 'a' && c <= 'z')
      return c + 'A' - 'a';
   return c;
}