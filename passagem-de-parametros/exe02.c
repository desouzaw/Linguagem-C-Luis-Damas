/**
 * Implemente a função ler_inteiro que devolve o inteiro lido. O parâmetro prompt contém a mensagem que solicita o inteiro ao usuário. Deverá receber apenas inteiros superiores ou iguais a zero 
 * int ler_inteiro(char *prompt)
 */

#include <stdio.h>

int ler_inteiro(char *);

int main(void) {
   int n = ler_inteiro("Insira um valor inteiro: ");
   printf("%d\n", n);

   return 0;
}

int ler_inteiro(char *prompt) {
   while (*prompt)
      putchar(*prompt++);
   
   int integer = 0;
   int c;

   while ((c = getchar()) >= '0' && c <= '9')
      integer = integer * 10 + c - '0';

   return integer;
}