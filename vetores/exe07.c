/**
 * Implemente a função
 * int memicmp(char *s1, char *s2, int n)
 * que verifica se as n primeiras posições dos vetores s1 e s2 são ou não iguais, independentemente de estarem em maiúsculas ou minúsculas (ignore case)
 */

#include <stdio.h>

int mem_icmp(char *s1, char *s2, int n);
char to_lower(char c);

int main(void) {
   char s1[200], s2[200];
   int n;

   printf("Digite uma string: ");
   fgets(s1, 200, stdin);
   printf("Digite outra string: ");
   fgets(s2, 200, stdin);
   printf("Quantas caracteres vc quer comparar? ");
   scanf("%d", &n);

   if (mem_icmp(s1, s2, n))
      printf("Os %d caracteres são iguais\n", n);
   else
      printf("Os %d caracteres não são iguais\n", n);

   return 0;
}

int mem_icmp(char *s1, char *s2, int n) {
   for (int i = 0; i < n; i++)
      if (to_lower(s1[i]) != to_lower(s2[i])) return 0;
   return 1; 
}

char to_lower(char c) {
   return c >= 'a' && c <= 'z' ? c : c + 'a' - 'A';
}