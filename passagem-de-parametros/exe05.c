/**
 * Implemente, de forma recursiva, a função strcat que concatena duas strings
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *_strcat(char *, char *);
void trim_newline(char *);

int main(void) {
   char str1[SIZE_STRING], str2[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str1, SIZE_STRING, stdin);
   trim_newline(str1);
   puts("Informe outra string:");
   fgets(str2, SIZE_STRING, stdin);
   trim_newline(str2);

   _strcat(str1, str2);
   puts(str1);

   return 0;
}

char *_strcat(char *dest, char *orig) {
   if (!*orig)
      return dest;
   
   int length = strlen(dest);
   *(dest + length) = *orig;
   *(dest + length + 1) = '\0';

   return _strcat(dest + 1, orig + 1);
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}