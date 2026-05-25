/**
 * Implemente a função char *metade(char *s) que cria dinamicamente uma nova string contendo apenas metade da string s
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

string half(string);

int main(void) {
   string str = half("metade");
   puts(str);
   return 0;
}

string half(string s) {
   size_t length = strlen(s) / 2;
   string new_s = (string) malloc(length);

   size_t i;
   for (i = 0; i < length; i++)
      new_s[i] = s[i];
   new_s[i] = '\0';

   return new_s;
}