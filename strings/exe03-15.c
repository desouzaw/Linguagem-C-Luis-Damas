/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *lower_upper(char *s)
 * recebe uma string de caracteres alfabéticos e coloca todos os caracteres em minúsculas, alinhados à esquerda, pela mesma ordem em que aparecem. Os que estão em maiúsculas são alinhados à direita.
 * lower_upper("EraUmaVezUMCavalo") --> "ramaezavaloEUVUMC"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *lower_upper(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(lower_upper(str));
   return 0;
}

char *lower_upper(char *s) {
   char str2[strlen(s) + 1];
   int i, j;
   
   for (i = 0, j = 0; s[i] != '\0'; i++)
      if (islower(s[i])) {
         str2[j] = s[i];
         j++;
      }

   for (i = 0; s[i] != '\0'; i++)
      if (isupper(s[i])) {
         str2[j] = s[i];
         j++;
      }
   
   str2[j] = '\0';
   strcpy(s, str2);
   return s;
}