/**
 * int entre(int x, int lim_inf, int lim_sup)
 * Verifica se x se encontra no intervalo lim_inf <= x <= lim_sup
 */

#include <stdio.h>

int entre(int, int, int);

int main(void) {
   int x, lim_inf, lim_sup;

   puts("Informe um número inteiro:");
   scanf("%d", &x);
   puts("Informe o limite inferior:");
   scanf("%d", &lim_inf);
   puts("Informe o limite superior:");
   scanf("%d", &lim_sup);

   if (entre(x, lim_inf, lim_sup))
      printf("%d está dentro dos limites\n", x);
   else
      printf("%d está fora dos limites\n", x);
      
   return 0;
}

int entre(int x, int lim_inf, int lim_sup) {
   return lim_inf <= x && x <= lim_sup;
}