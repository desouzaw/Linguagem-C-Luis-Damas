/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char max_ascii(char *str)
 * devolve o caractere com maior código ASCII presente na string str
 * se a string estiver vazia devolve o \0
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char max_ascii(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("O caractere com maior código ASCII presenta na string é:");
   putchar(max_ascii(str));
   putchar('\n');
 
   return 0;
}

char max_ascii(char *s) {
   char bigger = s[0];

   for (int i = 1; s[i] != '\0'; i++)
      if (s[i] > bigger) bigger = s[i];
      
   return bigger;
}