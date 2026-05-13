/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *upDown(char *s)
 * coloca os caracteres da string s alternadamente em Maiúsculas e Minúsculas
 * char * Mystring = "Alfabeto Grego";
 * upDown(MyString) --> "AlFaBeTo gReGo"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

char *upDown(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(upDown(str));
 
   return 0;
}

char *upDown(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (i % 2) s[i] = tolower(s[i]);
      else s[i] = toupper(s[i]);
   }
      
   return s;
}