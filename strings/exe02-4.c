/**
 * Implemente a seguinte função
 * char *strlwr(char *str)
 * coloca todos os caracteres em minúsculas
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *strlwr(char *);

int main(void) {
   char str[SIZE_STRING];
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(strlwr(str));
   return 0;
}

char *strlwr(char *str) {
   for (int i = 0; str[i] != '\0'; i++)
      if (str[i] >= 'A' && str[i] <= 'Z')
         str[i] += 'a' -  'A';
   return str;
}