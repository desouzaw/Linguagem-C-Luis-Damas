/**
 * Escreva de forma iterativa e recursiva, a função de Fibonacci que é definida da seguinte forma:
 * 
 * fib(0) = 1
 * fib(1) = 1
 * fib(n) = fib(n - 1) + fib(n - 2);
 * 
 * Em seguida, escreva um programa que apresente o resultado da execução das duas funções na tela e verifique, comparativamente, os tempos de cálculo de ambas as funções para fib(35) e fib(40)
 */

#include <stdio.h>                                                                                                                                                                                                                                                                                          

long int fib_recursive(int);
long int fib_iteractive(int);

int main(void) {
   printf("fib(35) iterativa %ld\n", fib_iteractive(35));
   printf("fib(35) recursiva %ld\n", fib_recursive(35));
   printf("fib(40) iterativa %ld\n", fib_iteractive(40));
   printf("fib(40) recursiva %ld\n", fib_recursive(40));

   int n;
   puts("Informe um número:");
   scanf("%d", &n);

   printf("fib(%d) iterativa %ld\n", n, fib_iteractive(n));
   printf("fib(%d) recursiva %ld\n", n, fib_recursive(n));

   return 0;
}

long int fib_recursive(int n) {
   if (n < 0) {
      printf("O número tem que ser maior ou igual a 0\n");
      return (long) -1;
   }

   if (n == 1 || n == 0)
      return (long) 1;
   return (long) fib_recursive(n - 1) + fib_recursive(n - 2);
}

long int fib_iteractive(int n) {
   if (n < 0) {
      printf("O número tem que ser maior ou igual a 0\n");
      return (long) -1;
   }

   if (n == 0 || n == 1)
      return (long) 1;
   
   long n1 = 1, n2 = 1, fib;

   for (int i = 2; i <= n; i++) {
      fib = n1 + n2;
      n1 = n2;
      n2 = fib;
   }

   return (long) fib;
}