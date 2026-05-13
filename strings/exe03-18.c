/**
 * Implemente a seguinte função retirada de enunciado de exame
 * int is_alfa_digit(char *string)
 * Esta função recebe uma string, e tem por objetivo verificar se essa string contém alternadamente um caractere alfabético seguido de um dígito. O primeiro caractere deverá sempre alfabético
 * 
 * is_alfa_digit("") --> verdade
 * is_alfa_digit("1") --> falso
 * is_alfa_digit("A") --> verdade
 * is_alfa_digit("X.Y") --> falso
 * is_alfa_digit("X7Y") --> verdade
 * is_alfa_digit("1A2") --> falso
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100

int is_alfa_digit(char *);

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   if (is_alfa_digit(str))
      printf("Verdade\n");
   else
      printf("Falso\n");

   return 0;
}

int is_alfa_digit(char *string) {
   for (int i = 0; string[i] != '\0'; i++) {
      if (i % 2 == 0 && !isalpha(string[i])) return 0;
      if (i % 2 != 0 && !isdigit(string[i])) return 0;
   }
   return 1;
} 