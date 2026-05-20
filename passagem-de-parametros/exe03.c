/**
 * Transforme a função anterior de tal forma que o inteiro seja colocado num parâmetro enviado ao procedimento ler_inteiro
 */

#include <stdio.h>

void ler_inteiro(char *, int *);

int main(void) {
   int n;
   ler_inteiro("Insira um valor inteiro: ", &n);
   printf("%d\n", n);

   return 0;
}

void ler_inteiro(char *prompt, int *n) {
   while (*prompt)
      putchar(*prompt++);
   
   *n = 0;
   int c;

   while ((c = getchar()) >= '0' && c <= '9')
      *n = (*n) * 10 + c - '0';
}