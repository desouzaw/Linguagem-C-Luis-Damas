/**
 * Implemente a seguinte função, usando unicamente operações entre ponteiros
 * char *strDelUpper(char *s)
 * apaga todos os caracteres maiúsculos em s
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *strDelUpper(char *);
void trim_newline(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   trim_newline(str);
   puts(strDelUpper(str));

   return 0;
}

char *strDelUpper(char *s) {
   char *ptr = s;
   int i = 0;
   
   while (*ptr) {
      if (!isupper(*ptr)) {
         ptr++;
         continue;
      }

      char *aux = ptr;

      while (*aux) {
         *aux = *(aux+1);
         aux++;
      }
   }

   return s;
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}