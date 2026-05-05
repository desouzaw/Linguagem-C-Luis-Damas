/**
 * long int n_segundos(int n_horas)
 * Devolve o número de segundos existentes em um conjunto de horas
 * 
 * n_segundos(0) --> 0
 * n_segundos(1) --> 3600
 * n_segundos(2) --> 7200
 */

#include <stdio.h>

long int n_segundos(int);

int main(void) {
   int n_horas;

   puts("Informe a hora:");
   scanf("%d", &n_horas);
   printf("%d --> %ld\n", n_horas, n_segundos(n_horas));
   
   return 0;
}

long int n_segundos(int n_horas) {
   return n_horas * 3600;
}