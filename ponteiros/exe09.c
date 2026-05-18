/**
 * Implemente a seguinte função
 * char *strDelStr(char *s1, char *s2)
 * apaga em s1 a primeira ocorrência de s2.
 * char *s = "O rato roeu a rolha da garrafa de rum do rei da Rússia"
 * strDelStr(s, "xy") --> "O rato roeu a rolha da garrafa de rum do rei da Rússia"
 * strDelStr(s, "ra") --> "O to roeu a rolha da garrafa de rum do rei da Rússia"
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *strDelStr(char *, char *);
void trim_newline(char *);
char *_strstr(char *, char *);

int main(void) {
   char str[SIZE_STRING], substr[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   trim_newline(str);
   puts("Informe uma substring:");
   fgets(substr, SIZE_STRING, stdin);
   trim_newline(substr);
   puts(strDelStr(str, substr));
   return 0;
}

char *strDelStr(char *s1, char *s2) {
   char *start_substr = _strstr(s1, s2);
   
   if (start_substr) {
      char *end_substr = start_substr + strlen(s2);

      while (*end_substr) {
         *start_substr = *end_substr;
         start_substr++;
         end_substr++;
      }

      *start_substr = '\0';
   }
   
   return s1;
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