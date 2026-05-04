/**
 * int minus(valor)
 * Devolve um valor recebido sempre como número negativo
 * minus(10) -> -10
 * minus(-10) -> -10
 */

#include <stdio.h>

int minus(int);

int main(void) {
   int x;

   puts("Informe um número inteiro: ");
   scanf("%d", &x);
   printf("%d --> %d\n", x, minus(x));

   return 0;
}

int minus(int valor) {
   return valor < 0 ? valor : -valor;
}