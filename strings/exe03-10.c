/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *allspaces(char *s)
 * Substitui todos os caracteres da string s por espaços em branco
 * char *mystring = "Alfa"
 * allspaces(mystring) --> "    "
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *allspaces(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(allspaces(str));
 
   return 0;
}

char *allspaces(char *s) {
   for (int i = 0; s[i] != '\0'; i++)
      s[i] = ' ';
   return s;
}