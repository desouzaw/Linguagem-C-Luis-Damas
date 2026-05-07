/**
 * Implemente a função
 * int memcmp(char *s1, char *s2, int n)
 * que verifica se as n primeiras posições dos vetores s1 e s2 são ou não iguais
 */

#include <stdio.h>

int mem_cmp(char *s1, char *s2, int n);

int main(void) {
   char s1[200], s2[200];
   int n;

   printf("Digite uma string: ");
   fgets(s1, 200, stdin);
   printf("Digite outra string: ");
   fgets(s2, 200, stdin);
   printf("Quantas caracteres vc quer comparar? ");
   scanf("%d", &n);

   if (mem_cmp(s1, s2, n))
      printf("Os %d caracteres são iguais\n", n);
   else
      printf("Os %d caracteres não são iguais\n", n);

   return 0;
}

int mem_cmp(char *s1, char *s2, int n) {
   for (int i = 0; i < n; i++)
      if (s1[i] != s2[i]) return 0;
   return 1; 
}