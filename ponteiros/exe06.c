/**
 * Implemente a seguinte função
 * char *strins(char *dest, char *orig)
 * insere a string orig no ínicio da string dest, retornando dest
 * ex:
 *    char s[100] = "Autônoma";
 *    strins(s, "Universidade");
 *    printf(s) --> UniversidadeAutônoma
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *strins(char *, char *);
void trim_newline(char *);

int main(void) {
   char dest[SIZE_STRING], orig[SIZE_STRING];
   puts("Informe uma string:");
   fgets(dest, SIZE_STRING, stdin);
   trim_newline(dest);
   puts("Informe outra string:");
   fgets(orig, SIZE_STRING, stdin);
   trim_newline(orig);
   puts(strins(dest, orig));
   
   return 0;
}

char *strins(char *dest, char *orig) {
   int len_dest = strlen(dest);
   int len_orig = strlen(orig);

   int i;
   for (i = 0; i < len_dest; i++)
      dest[len_orig + i] = dest[i];
   dest[len_orig + i] = '\0';

   for (i = 0; i < len_orig; i++)
      dest[i] = orig[i];
   
   return dest;
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}