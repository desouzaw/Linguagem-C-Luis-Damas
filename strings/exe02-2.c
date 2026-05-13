/**
 * Implemente a seguinte função
 * char *init_str(char *s)
 * Torna a string vazia
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *init_str(char *);

int main(void) {
   char str[SIZE_STRING];
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Deixando a string vazia...");
   init_str(str);
   printf("A string agora tem %lu caracteres\n", strlen(str));
   return 0;
}

char *init_str(char *s) {
   s[0] = '\0';
   return s;
}