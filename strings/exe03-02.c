/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char n_esimo(char *s, int n)
 * devolve o n-ésimo caractere da string
 * supõe-se que n <= strlen(s)
 * n_esimo("EraUmaVez", 1) --> E
 * n_esimo("EraUmaVez", 3) --> a
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char n_esimo(char *, int);

int main(void) {
   char str[SIZE_STRING];
   int n;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Qual o valor de n que representa o n-ésimo caractere da string: ");
   scanf("%d", &n);
   putchar(n_esimo(str, n));
   putchar('\n');

   return 0;
}

char n_esimo(char *s, int n) {
   return s[--n];
}