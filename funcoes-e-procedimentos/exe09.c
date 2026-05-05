/**
 * int impar(int x)
 * Devolve verdade se x for impar. Falso, caso contrário
 */

#include <stdio.h>

int impar(int);

int main(void) {
   int x;

   puts("Informe um número: ");
   scanf("%d", &x);

   if (impar(x))
      printf("É impar\n");
   else
      printf("É par\n");
   
   return 0;
}

int impar(int x) {
   return x % 2;
}