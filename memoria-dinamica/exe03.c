/**
 * Implemente a função char *inverte(char *s) que cria dinamicamente uma nova string contendo a string s invertida
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

string reverse(string);

int main(void) {
   string str = reverse("Invertendo string!");
   puts(str);
   return 0;
}

string reverse(string s) {
   size_t length = strlen(s);
   string new_s = (string) malloc(length);

   size_t i;
   size_t j;

   for (i = 0, j = length - 1; i < length; i++, j--)
      new_s[i] = s[j];
   new_s[i] = '\0';

   return new_s;
}