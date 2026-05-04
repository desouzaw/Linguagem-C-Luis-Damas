/**
 * char tolower(char c)
 * Devolve o valor do caractere c transformado em minúsculas
 */

#include <stdio.h>

char to_lower(char);

int main(void) {
   int c;

   puts("Informe um caractere:");
   c = getchar();
   putchar(to_lower(c));
   putchar('\n');

   return 0;
}

char to_lower(char c) {
   if (c >= 'A' && c <= 'Z')
      return c + 'a' - 'A';
   return c;
}