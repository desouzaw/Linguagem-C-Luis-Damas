/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *repeticoes(char *s)
 * receba uma string, retirando-lhe todos os caracteres que não se encontram repetidos
 * repeticoes("ALFACE") --> "AA"
 * repeticoes("ALTA FIDELIDADE") --> "ALAIDELIDADE"
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *repeticoes(char *);
int count(char *, char);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(repeticoes(str));
   return 0;
}

char *repeticoes(char *s) {
   char str2[strlen(s) + 1];
   int j = 0;
   for (int i = 0; s[i] != '\0'; i++) {
      if (count(s, s[i]) >= 2) {
         str2[j] = s[i];
         j++;
      }
   }

   str2[j] = '\0';
   strcpy(s, str2);
   return s;
}

int count(char *s, char ch) {
   int count = 0;
   for (int i = 0; s[i] != '\0'; i++)
      if (s[i] == ch) count++;
   return count;
}