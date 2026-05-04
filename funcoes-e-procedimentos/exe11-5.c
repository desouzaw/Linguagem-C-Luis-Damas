/**
 * int isupper(char c)
 * Verdade caso c seja uma letra maiúscula. Falso, caso contrário.
 */

#include <stdio.h>

int is_upper(char);

int main(void) {
   char c;

   puts("Informe um caractere:");
   c = getchar();
   if (is_upper(c))
      printf("É maiúscula\n");
   else
      printf("É minúscula\n");

   return 0;
}

int is_upper(char c) {
   return c >= 'A' && c <= 'Z';
}