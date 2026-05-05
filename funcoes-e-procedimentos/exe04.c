/**
 * int abs(int x)
 * Devolve o valor absoluto de x.
 * 
 * abs(-5) --> 5
 * abs(5) --> 5
 */

#include <stdio.h>

int abs(int);

int main(void) {
   int x;

   puts("Informe um valor:");
   scanf("%d", &x);
   printf("%d --> %d\n", x, abs(x));
   
   return 0;
}

int abs(int x) {
   return x < 0 ? -x : x;
}