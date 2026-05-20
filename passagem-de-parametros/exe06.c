/**
 * Escreva, recursivamente, a função
 * char *strchr(char *str, char ch)
 * que retorna o endereço em que se encontra o caractere ch na string str. Caso não exista, devolve NULL
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *_strchr(char *, char);
void trim_newline(char *);

int main(void) {
   char str[SIZE_STRING], ch;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   trim_newline(str);
   puts("Informe um caractere:");
   ch = getchar();

   char *ptr = _strchr(str, ch);

   if (ptr)
      printf("%c está presente na string %s no endereço %p\n", *ptr, str, ptr);
   else
      printf("%c não está presente em %s\n", ch, str); 

   return 0;
}

char *_strchr(char *str, char ch) {
   if (*str == ch)
      return str;

   if (*str && *str != ch)
      return _strchr(str + 1, ch);

   return NULL;
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}
