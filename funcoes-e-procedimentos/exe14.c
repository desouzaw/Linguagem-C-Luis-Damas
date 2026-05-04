/**
 * int is_special(int x)
 * Devolve um valor lógico que indica se o dobro de x é ou não igual a x²
 */

#include <stdio.h>

int is_special(int);

int main(void) {
   int x;

   puts("Informe um número inteiro: ");
   scanf("%d", &x);
   printf("O dobro de %d %s igual a %d ao quadrado\n", x, is_special(x) ? "é" : "não é", x);

   return 0;
}

int is_special(int x) {
   return x * 2 == x * x;
}