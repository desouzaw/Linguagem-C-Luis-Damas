/**
 * int islower(char c)
 * Verdade caso c seja uma letra minúscula. Falso, caso contrário;
 */

#include <stdio.h>

int is_lower(char);

int main(void) {
   char c;

   puts("Informe um caractere:");
   c = getchar();
   if (is_lower(c))
      printf("É minúscula\n");
   else
      printf("É maiúscula\n");

   return 0;
}

int is_lower(char c) {
   return c >= 'a' && c <= 'z';
}