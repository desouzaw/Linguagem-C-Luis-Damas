/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *xspace(char *s)
 * coloca um espao depois de cada caractere NÃO ESPAÇO na string s
 * *s = "Era Uma Vez"
 * xspace(s) --> "E r a  U m a  V e z"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *xspace(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(xspace(str));
 
   return 0;
}

char *xspace(char *s) {
   int total_spaces = 0;
   
   for (int i = 0; s[i] != '\0'; i++)
      if (!isspace(s[i])) total_spaces++;
   
   char str2[strlen(s) + total_spaces + 1];
   int j = 0;

   for (int i = 0; s[i] != '\0'; i++) {
         str2[j] = s[i];
         if (!isspace(s[i]))
            str2[++j] = ' ';
         j++;
   }

   str2[j] = '\0';
   strcpy(s, str2);
   return s;
}