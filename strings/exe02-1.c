/** Implemente a seguinte função
 * int strcounta(char *s)
 * Devolve o n° de caracteres alfabéticos em s
 * strcounta("15 abacates")  --> 8
 * strcounta("quinze (15) abacates")  --> 14
 */

#include <stdio.h>
#include <string.h>

int strcounta(char *);

#define SIZE_STRING 100

int main(void) {
   char str[SIZE_STRING];
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   printf("Número de caracteres alfabéticos = %d\n", strcounta(str));
   return 0;
}

int strcounta(char *s) {
   int count = 0;
   for (int i = 0; s[i] != '\0'; i++)
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
         count++;
   return count;
}