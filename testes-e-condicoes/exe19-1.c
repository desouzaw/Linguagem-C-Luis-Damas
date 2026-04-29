/**
 * Escreva um programa que indique o número de dias existentes em um mês (fevereiro = 28 dias)
 * Usando apenas a instrução de teste if-else
 */

#include <stdio.h>

void main(void) {
   unsigned char month;

   printf("Janeiro [ 1 ]\n");
   printf("Fevereiro [ 2 ]\n");
   printf("Março [ 3 ]\n");
   printf("Abril [ 4 ]\n");
   printf("Maio [ 5 ]\n");
   printf("Junho [ 6 ]\n");
   printf("Julho [ 7 ]\n");
   printf("Agosto [ 8 ]\n");
   printf("Setembro [ 9 ]\n");
   printf("Outubro [ 10 ]\n");
   printf("Novembro [ 11 ]\n");
   printf("Dezembro [ 12 ]\n");
   printf("Escolha um mês: ");
   scanf("%hhu", &month);

   if (month == 2)
      printf("O mês escolhido tem 28 dias\n");
   else if ( month == 1 || month == 3 || month == 5 ||
             month == 7 || month == 8 || month == 10 || month == 12
   )
      printf("O mês escolhido tem 31 dias\n");
   else if (month == 4 || month == 6 || month == 9 ||month == 11)
      printf("O mês escolhido tem 30 dias\n");
   else
      printf("Mês inválido\n");
}