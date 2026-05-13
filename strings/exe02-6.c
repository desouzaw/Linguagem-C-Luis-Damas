/**
 * Implemente a seguinte função
 * int stricmp(char *s1, char *s2)
 * faz o mesmo que a função strcmp, mas realiza a comparação ignorando se os caracteres estão em maiúsculas ou minúsculas (ignore case)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

int stricmp(char *, char *);

int main(void) {
   char str1[SIZE_STRING], str2[SIZE_STRING];
   puts("Informe uma string:");
   fgets(str1, SIZE_STRING, stdin);
   str1[strcspn(str1, "\n")] = '\0';
   puts("Informe outra string:");
   fgets(str2, SIZE_STRING, stdin);
   str2[strcspn(str2, "\n")] = '\0';
   if (stricmp(str1, str2) > 0)
      printf("A primeira string vem depois da segunda\n");
   else if (stricmp(str1, str2) < 0)
      printf("A segunda string vem depois da primeira\n");
   else
      printf("As strings são iguais\n");

   return 0;
}

int stricmp(char *s1, char *s2) {
   int i;
   for (i = 0; s1[i] && s2[i]; i++)
      if (tolower(s1[i]) != tolower(s2[i])) break;
   return tolower(s1[i]) - tolower(s2[i]);
}