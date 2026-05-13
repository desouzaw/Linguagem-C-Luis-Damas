/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *strpack(char *s)
 * receba uma string e compacta num único caractere qualquer conjunto de caracteres repetidos consecutivos
 * strpack("Arrecadddaccao") --> "Arecadacao"
 * strpack("     AAAaaaBBB  CCCIALFFA") --> " AaB CIALFA"
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *strpack(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(strpack(str));
 
   return 0;
}

char *strpack(char *s) {
   char str2[strlen(s)];
   str2[0] = s[0];
   int j = 1;
   for (int i = 1; s[i] != '\0'; i++) {
      if (s[i] != s[i - 1]) {
         str2[j] = s[i];
         j++;
      }
   }

   str2[j] = '\0';
   strcpy(s, str2);
   return s;
}