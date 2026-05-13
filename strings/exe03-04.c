/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *entremeado(char *s, int n)
 * transforma a string s, deixando apenas os carcateres existentes de n em n posições
 * 
 * strcpy(str, "ABCDEFGHIJKLMN")
 * entremeado(str, 0) --> "ABCDEFGHIJKLMN"
 * entremeado(str, 1) --> "ACEGIKM"
 * entremeado(str, 3) --> "AEIM"
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *entremeado(char *, int);

int main(void) {
   char str[SIZE_STRING];
   int n;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Informe um número:");
   scanf("%d", &n);
   puts(entremeado(str, n));
 
   return 0;
}

char *entremeado(char *s, int n) {
   char str2[strlen(s) + 1];
   int j = 0;
   for (int i = 0; s[i] != '\0' && i < strlen(s); i += n + 1, j++)
      str2[j] = s[i];
   
   str2[j] = '\0';
   strcpy(s, str2);

   return s;
}