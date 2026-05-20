/**
 * Implemente a função Exp que calcula o valor da seguinte expressão, sendo todos os componentes do tipo inteiro:
 *    exp  -> Somatório de i até n
 *    i = 1
 *    (a + i / n)²
 */

#include <stdio.h>

int _exp(int, int);

int main(void) {
   int n, a, total;

   printf("Informe o valor de N (limite superior): ");
   scanf("%d", &n);
   printf("Informe o valor de A (constante do somatório): ");
   scanf("%d", &a);
   total = _exp(n, a);
   printf("O valor do somatório é %d\n", total);

   return 0;
}

int _exp(int n, int a) {
   int total = 0;
   for (int i = 1; i <= n; i++)
      total += (a + i / n) * (a + i / n);
   return total;
}