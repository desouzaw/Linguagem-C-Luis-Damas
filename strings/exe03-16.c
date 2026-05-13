/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *all_big(char *s)
 * recebe uma string e deixa-lhe apenas os caracteres maiúsculos
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *all_big(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Apenas os caracteres maiúsculos da string:");
   puts(all_big(str));
   
   return 0;
}

char *all_big(char *s) {
   int i, j;
   for (i = 0, j = 0; s[i] != '\0'; i++) {
      if (isupper(s[i])) {
         s[j] = s[i];
         j++;
      }
   }
   s[j] = '\0';
   return s;
}