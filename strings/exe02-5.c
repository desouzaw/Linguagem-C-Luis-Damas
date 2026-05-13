/**
 * Implemente a seguinte função
 * char *strnset(char *s, char ch, int n)
 * coloca o caractere ch apenas nas primeiras n posições da string s
 * se n > strlen(s) então n toma o valor de strlen(s)
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *strnset(char *, char, int);

int main(void) {
   char str[SIZE_STRING], ch;
   int n;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Informe qual caractere vc quer inserir na string:");
   ch = getchar();
   puts("Quantas posições este caractere vai ocupar:");
   scanf("%d", &n);
   puts(strnset(str, ch, n));
   return 0;
}

char *strnset(char *s, char ch, int n) {
   n = n > strlen(s) ? strlen(s) : n;
   for (int i = 0; i < n; i++)
      s[i] = ch;
   return s;
}