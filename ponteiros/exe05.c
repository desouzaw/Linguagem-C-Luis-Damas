/**
 * Implemente a seguinte função
 * char *first_vogal(char *s)
 * retorna o endereço em que ocorre a primera vogal na string s. Caso não exista, retorna NULL
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *first_vogal(char *);
int isvogal(char);
void trim_newline(char *);

int main(void) {
   char str[SIZE_STRING];
   char *ptr = NULL;

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   trim_newline(str);
   ptr = first_vogal(str);

   if (!ptr)
      printf("Não exista vogal em %s\n", str);
   else
      printf("Endereço da primeira vogal em %s = %p | %c\n", str, (void *) ptr, *ptr);

   return 0;
}

char *first_vogal(char *s) {
   while (*s++ != '\0')
      if (isvogal(*s))
         return s;

   return NULL;
}

int isvogal(char c) {
   c = tolower(c);

   switch (c) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
         return 1;
      default:
         return 0;
   }
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}