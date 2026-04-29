/**
 * Escreva um programa que leia uma data e verifique se  esta é válida ou não
 */

#include <stdio.h>

void main(void) {
   unsigned char day, month;
   int year;

   printf("Informe um dia do mês (1, 2, ..., 31): ");
   scanf("%hhu", &day);
   printf("Informe um mês (1, 2, ..., 12): ");
   scanf("%hhu", &month);
   printf("Informe uma ano: ");
   scanf("%d", &year);

   if (day < 1 || day > 31 || month < 1 || month > 12)
      printf("Data inválida\n");
   else if ((month == 4 || month == 6 || month == 9 || month == 11) &&
            day > 30)
      printf("Data inválida\n");
   else if ((month == 2 && (day > 29 || (day == 29 && (year % 4 != 0))))) { 
      printf("Data inválida\n");
   } else
      printf("Data válida\n");
}