/**
 * long int num(int n_horas, char tipo)
 * Semelhante à função anterior, só que recebe mais um parâmetro indicando aquilo que se quer saber 'h' - Horas, 'm' - Minutos e 's' - Segundos.
 *    num(3, 'h') --> 3
 *    num(3, 'm') --> 180
 *    num(3, 's') --> 10800
 * 
 * Resolva este exercício de três formas distintas: com a instrução if-else, switch com break e switch sem break
 * 
 *    Supõe-se que o tipo está sempre correto
 */

#include <stdio.h>

long int num1(int, char);
long int num2(int, char);
long int num3(int, char);

int main(void) {
   int n_horas;
   char tipo;

   puts("Informe um valor:");
   scanf("%d", &n_horas);
   while (getchar() != '\n');
   puts("O que vc quer saber:");
   printf("\tHoras - [h]\n");
   printf("\tMinutos - [m]\n");
   printf("\tSegundos - [s]\n");
   tipo = getchar();
   printf("%d --> %ld\n", n_horas, num1(n_horas, tipo));
   printf("%d --> %ld\n", n_horas, num2(n_horas, tipo));
   printf("%d --> %ld\n", n_horas, num3(n_horas, tipo));

   return 0;
}

long int num1(int n_horas, char tipo) {
   if (tipo == 'h' || tipo == 'H') return n_horas;
   else if (tipo == 'm' || tipo == 'M') return n_horas * 60;
   else return n_horas * 60 * 60;
}

long int num2(int n_horas, char tipo) {
   long int total;

   switch (tipo) {
      case 'h':
      case 'H':
         total = n_horas;
         break;
      case 'm':
      case 'M':
         total = n_horas * 60;
         break;
      default:
         total = n_horas * 60 * 60;    
   }

   return total;
}

long int num3(int n_horas, char tipo) {
   switch (tipo) {
      case 'h':
      case 'H':
         return n_horas;
      case 'm':
      case 'M':
         return n_horas * 60;
      default:
         return n_horas * 60 * 60;
   }
}