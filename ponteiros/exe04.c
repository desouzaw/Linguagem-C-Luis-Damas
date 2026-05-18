/**
 * Implemente a seguinte função
 * char *strstr(char *str1, char *str2)
 * retorna o endereço de str1 em que ocorre pela primera vez a substring str2. Caso não exista, retorna NULL
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *_strstr(char *, char *);
void trim_newline(char *);

int main(void) {
   char str[SIZE_STRING], substr[SIZE_STRING];
   char *ptr = NULL;

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   trim_newline(str);
   puts("Informe a substring:");
   fgets(substr, SIZE_STRING, stdin);
   trim_newline(substr);

   ptr = _strstr(str, substr);

   if (!ptr)
      printf("%s não está presente em %s\n", substr, str);
   else
      printf("Endereço onde inicia %s em %s = %p | %s\n", substr, str, (void *) ptr, ptr);

   return 0;
}

char *_strstr(char *str1, char *str2) {
   if (*str2 == '\0') return str1;

   int len1 = strlen(str1);
   int len2 = strlen(str2);

   for (int i = 0; i <= len1 - len2; i++) {
      int j = i;
      int k = 0;

      while (str2[k] != '\0' && str1[j] == str2[k]) {
         j++;
         k++;
      }

      if (k == len2)
         return &str1[i];
   }

   return NULL;
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}