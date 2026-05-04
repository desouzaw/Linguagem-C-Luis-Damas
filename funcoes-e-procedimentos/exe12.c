/**
 * int is_square(int x, int y)
 * Devolve um valor lógico que indica se x é ou não igual a y²
 */

#include <stdio.h>

int is_square(int, int);

int main(void) {
   int x, y;

   puts("Informe um número inteiro:");
   scanf("%d", &x);
   puts("Informe mais um número inteiro:");
   scanf("%d", &y);
   printf("%d %s igual a %d ao quadrado\n", x, is_square(x,y) ? "é" : "não é", y);

   return 0;
}

int is_square(int x, int y) {
   return x == y * y;
}