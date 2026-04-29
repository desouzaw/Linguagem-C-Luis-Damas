/**
 * Escreva um programa que indique o número de dias existentes em um mês (fevereiro = 28 dias)
 * Usando o switch
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

   switch (month) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
         printf("O mês escolhido tem 31 dias\n");
         break;
      case 4:
      case 6:
      case 9:
      case 11:
         printf("O mês escolhido tem 30 dias\n");
         break;
      case 2:
         printf("O mês escolhido tem 28 dias\n");
         break;
      default:
         printf("Mês inválido\n");
   } 
}