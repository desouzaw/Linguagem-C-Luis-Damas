/**
 * Implemente a seguinte função retirada de enunciado de exame
 * int atoi(char *s)
 * recebe uma string e devolve o inteiro que nela está representado.
 * atoi("1234") --> 1234
 * atoi("-123abc") --> -123
 * atoi("+51ab46") --> 51
 * atoi("abc") --> 0
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

int atoi(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   printf("%d\n", atoi(str));
   
   return 0;
}

int atoi(char *s) {
   int i;
   int signal = 1;
   int number = 0;

   for (i = 0; s[i] == ' '; i++);

   if (s[i] == '+' || s[i] == '-') {
      if (s[i] == '-')
         signal = -1;
      i++;
   }

   for (; s[i] >= '0' && s[i] <= '9'; i++)
      number = number * 10 + s[i] - '0';

   return number * signal;
}