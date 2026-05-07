/**
 * Implemente a função
 * char * mem_cpy(char *dest, char *orig, int n)
 * que copia n caracteres do vetor origem(orig) para o vetor destino(dest) e devolve o vetor dest.
 */

#include <stdio.h>

char *mem_cpy(char *dest, char *orig, int n);

int main(void) {
   char orig[200], dest[200];
   int n;

   printf("Digite uma string: ");
   fgets(orig, 200, stdin);
   puts("Quantos caracteres vc quer copiar para o novo vetor?");
   scanf("%d", &n);
   printf("Novo vetor: %s\n", mem_cpy(dest, orig, n));
}

char *mem_cpy(char *dest, char *orig, int n) {
   for (int i = 0; i < n; i++)
      dest[i] = orig[i];
   dest[n] = '\0';
   return dest;
}