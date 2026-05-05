/**
 * float val(float x, int n, float t)
 * Devolve o val(valor atual líquido) para n anos, à taxa t e é definido através da seguinte fórmula
 * 
 * val = x/(1+t) + x/(1+t)² + x/(1+t)³ + ... + x/(1+t)”
 */

#include <stdio.h>
#include <math.h> // flag -lm para compilar

float val(float, int, float);

int main(void) {
   float x, t;
   int n;

   puts("Informe o valor atual líquido:");
   scanf("%f", &x);
   puts("Informe a quantidade de anos:");
   scanf("%d", &n);
   puts("Informe a taxa:");
   scanf("%f", &t);

   printf("Novo valor %f\n", val(x, n, t));

   return 0;
}

float val(float x, int n, float t) {
   float total = 0;

   for (int i = 1; i <= n; i++) {
      total += x / pow(1 + t, i);
   }

   return total;
}