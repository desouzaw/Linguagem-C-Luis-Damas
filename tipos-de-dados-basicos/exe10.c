/**
 * Escreva um programa que solicite ao usuário uma determinada data no formato aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaaa
 */

#include <stdio.h>

void main(void) {
   int day, month, year;

   printf("Informe a data no formato aaaa-mm-dd: ");
   scanf("%d-%d-%d", &year, &month, &day);

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