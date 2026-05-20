/**
 * Implemente as seguintes funções que manipulam apenas valores inteiros:
 * iszero - verifica se o parâmetro n é ou não zero
 * add1 - Adiciona 1 ao próprio parâmetro n
 * zero - Coloca zero no parâmetro n
 */

#include <stdio.h>

int iszero(int);
void add1(int *);
void zero(int *);

int main(void) {
   int n;

   printf("Informe um número inteiro: ");
   scanf("%d", &n);

   if (iszero(n))
      printf("O número informado é zero!\n");
   else
      printf("O número informado é diferente de zero!\n");
   
   printf("Adicionando 1 a %d...\n", n);
   add1(&n);
   printf("%d\n", n);

   printf("Transformando %d em zero...\n", n);
   zero(&n);
   printf("%d\n", n);

   return 0;
}

int iszero(int n) {
   return n == 0;
}

void add1(int *n) {
   (*n)++;
}

void zero(int *n) {
   *n = 0;
}