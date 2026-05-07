/**
 * Implemente a função
 * float max(float v[], int n)
 * 
 * Que recebe um vetor de números reais e o número de elementos a considerar
 * 
 * Retorna o maior número entre os n primeiros elementos do vetor
 */

#include <stdio.h>

void get_elements(float x[], int n);
float max(float x[], int n);

int main(void) {
   int n;

   printf("Informe quantos elementos o vetor terá: ");
   scanf("%d", &n);

   float vector[n], bigger;
   get_elements(vector, n);
   bigger = max(vector, n);

   printf("O maior elemento do vetor é %.2f\n", bigger);

   return 0;
}

void get_elements(float x[], int n) {
   for (int i = 0; i < n; i++) {
      printf("Informe o valor do %d° elemento do vetor: ", i + 1);
      scanf("%f", &x[i]);
   }
}

float max(float x[], int n) {
   float bigger = x[0];

   for (int i = 1; i < n; i++)
      if (x[i] > bigger) 
         bigger = x[i];

   return bigger;
}