/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *prox_char(char *s)
 * coloca em cada posição da string s o próximo caractere ASCII
 * char * mystring = "A8M0";
 * prox_char(myString) --> "B9N1"
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *prox_char(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts(prox_char(str));
 
   return 0;
}

char *prox_char(char *s) {
   for (int i = 0; s[i] != '\0'; i++)
      s[i] += 1;
      
   return s;
}