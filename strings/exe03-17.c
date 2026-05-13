/**
 * Implemente a seguinte função retirada de enunciado de exame
 * int is_len_ok(char *string, int comprimento)
 * verifica se o comprimento da string é igual ao valor que é enviado à função.
 * is_len_ok("", 0) --> Verdade
 * is_len_ok("OLA", 15) --> Falso
 * is_len_ok("OLA", 3) --> Verdade
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

int is_len_ok(char *, int);

int main(void) {
   char str[SIZE_STRING];
   int length;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Qual o tamanho da string:");
   scanf("%d", &length);
   printf("%s\n", is_len_ok(str, length) ? "Verdade" : "Falso");

   return 0;
}

int is_len_ok(char *string, int length) {
   return strlen(string) == length;
}