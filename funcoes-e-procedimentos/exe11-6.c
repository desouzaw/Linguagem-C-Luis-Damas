/**
 * int isspace(char c)
 * Verdade caso c seja um espaço ou um TAB. Falso, caso contrário
 */

#include <stdio.h>

int is_space(char);

int main(void) {
   char c;

   puts("Informe um caractere:");
   c = getchar();
   if (is_space(c))
      printf("É um espaço ou TAB\n");
   else
      printf("Não é espaço nem TAB\n");

   return 0;
}

int is_space(char c) {
   return c == ' ' || c == '\t';
}