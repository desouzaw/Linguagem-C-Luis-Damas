/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *transform(char *s)
 * recebe uma string e coloca toda a primeira metade em minúsculas e a segunda metade em MAIÚSCULAS
 * transform("Mafalda") --> "mafALDA"
 * transform("Mafaldas") --> "mafaLDAS"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *transform(char *);

int main(void) {
   char str[SIZE_STRING];
   int n;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(transform(str));

   return 0;
}

char *transform(char *s) {
   for (int i = 0; i < strlen(s); i++) {
      if (i < strlen(s) / 2) s[i] = tolower(s[i]);
      else s[i] = toupper(s[i]);
   }
   return s;   
}