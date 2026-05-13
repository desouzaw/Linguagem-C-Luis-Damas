/**
 * Implemente a seguinte função retirada de enunciado de exame
 * char *strijset(char *s, int i, int j, char ch)
 * char *str = "Anabela"
 * suponha a string anterior em todos os exemplos
 * 
 * strijset(str, 0, 2, '*') --> "***bela"
 * strijset(str, 3, 4, '#') --> "Ana##la"
 * strijset(str, 5, 20, '«') --> "Anabe««"
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *strijset(char *, int, int, char);

int main(void) {
   char str[SIZE_STRING], ch;
   int i, j;

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   puts("Informe em qual índice começará:");
   scanf("%d", &i);
   puts("Informe em qual índice terminará:");
   scanf("%d", &j);
   puts("Informe o caractere:");
   while (getchar() != '\n');
   ch = getchar();
   puts(strijset(str, i, j, ch));
 
   return 0;
}

char *strijset(char *s, int i, int j, char ch) {
   for (; i <= j && s[i] != '\0'; i++)
      s[i] = ch;

   return s;
}