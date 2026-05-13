/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *wordupr(char *s)
 * recebe uma string, coloca a primeira letra de cada palavra em maiúscula e as restantes em minúsculas. Supõe-se que a separação entre as palavras é realizada por espaços em branco
 * wordupr("ERA uma VeZ") -> "Era Uma Vez"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *wordupr(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(wordupr(str));
   return 0;
}

char *wordupr(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (i == 0 || s[i - 1] == ' ')
         s[i] = toupper(s[i]);
      else
         s[i] = tolower(s[i]);
   }
   return s;
}