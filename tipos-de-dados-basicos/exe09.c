/**
 * Escreva um programa que solicite a um usuário uma determinada data e a mostre em seguida no formato dd/mm/aaaa
 */

#include <stdio.h>

void main(void) {
   int day, month, year;

   printf("Informe o dia: ");
   scanf("%d", &day);
   printf("Informe o mês: ");
   scanf("%d", &month);
   printf("Informe o ano: ");
   scanf("%d", &year);
   printf("A data informada foi ");

   if (day < 10) {
      printf("0%d/", day);
   } else {
      printf("%d/", day);
   }

   if (month < 10) {
      printf("0%d/", month);
   } else {
      printf("%d/", month);
   }

   if (year < 10) {
      printf("0%d\n", year);
   } else {
      printf("%d\n", year);
   }
}