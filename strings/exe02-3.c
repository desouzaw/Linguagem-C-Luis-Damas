/**
 * Implemente a seguinte função
 * int ult_ind_chr(char *s, char c)
 * Devolve o último índice em que encontrou o caractere c em s. Caso não exista, devolve -1
 * ult_ind_chr("alface", 'a') --> 3
 * ult_ind_chr("alface", 'g') --> -1
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

int ult_ind_chr(char *, char);

int main(void) {
   char str[SIZE_STRING], c;
   int idx;
   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Qual caractere vc quer saber o índice da última ocorrência:");
   c = getchar();
   idx = ult_ind_chr(str, c);
   if ( idx == -1)
      printf("Este caractere não está presente na string\n");
   else
      printf("A última ocorrência está no índice %d\n", idx);
   return 0;
}

int ult_ind_chr(char *s, char c) {
   int idx = -1;
   for (int i = 0; s[i] != '\0'; i++)
      if (s[i] == c) idx = i;
   return idx;
}