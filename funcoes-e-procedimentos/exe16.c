/**
 * int isVogal(char ch)
 * Verifica se ch é uma das vogais do alfabeto (minúscula ou maiúscula)
 */

#include <stdio.h>

int isVogal(char);

int main(void) {
   int ch;

   puts("Informe um caractere:");
   ch = getchar();
   printf("%s uma vogal\n", isVogal(ch) ? "É" : "Não é");
   
   return 0;
}

int isVogal(char ch) {
   return ch == 'a' || ch == 'A' ||
          ch == 'e' || ch == 'E' ||
          ch == 'i' || ch == 'I' ||
          ch == 'o' || ch == 'O' ||
          ch == 'u' || ch == 'U';
}