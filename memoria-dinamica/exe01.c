/**
 * Implemente a função char* repete(char *string, int n) que cria dinamicamente uma nova string com n "cópias" da string original, separadas por espaço, exceto a última ocorrência
 * 
 * repete("Olá", 4) --> "Olá Olá Olá Olá"
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* string;

string repeat(string, int);

int main(void) {
   string str = repeat("Olá", 4);
   printf("\"%s\"\n", str);
   return 0;
}

string repeat(string str, int n) {
   size_t length = strlen(str) * n + n;
   string s = (string) malloc(length);

   if (!s) return NULL;

   for (size_t i = 0; i < length; i++) {
      for (size_t j = 0; j < strlen(str); j++)
         s[i++] = str[j];

      if (i == length - 1)
         s[i] = '\0';
      else
         s[i] = ' ';
   }
  
   return s;
}