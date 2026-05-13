/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *strduplica(char *s)
 * recebe uma string e duplica o seu conteúdo.
 * char str[100] = "Ana"
 * strduplica(s)
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100
char *strduplica(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(strduplica(str));
 
   return 0;
}

char *strduplica(char *s) {
   int length = strlen(s);
   int i;

   for (i = length; i < length * 2; i++)
      s[i] = s[i - length];

   s[i] = '\0';
   return s;
}