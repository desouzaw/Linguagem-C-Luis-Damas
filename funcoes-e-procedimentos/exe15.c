/**
 * int cubo(int x)
 * Devolve o valor de x³
 */

#include <stdio.h>

int cubo(int);

int main(void) {
   int x;

   puts("Informe um número inteiro:");
   scanf("%d", &x);
   printf("O cubo de %d é %d\n", x, cubo(x));

   return 0;
}

int cubo(int x) {
   return x * x * x;
}