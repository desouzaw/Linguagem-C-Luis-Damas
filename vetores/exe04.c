/**
 * Complete o programa que permite jogar o jogo da velha de forma que ele termine quando um jogador complete alguma linha, coluna ou diagonal
 */

#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]) {
   for (int i = 0; i < DIM; i++)
      for (int j = 0; j < DIM; j++)
         s[i][j] = ESPACO;
}

void mostra(char s[DIM][DIM]) {
   for (int i = 0; i < DIM; i++) {
      for (int j = 0; j < DIM; j++)
         printf("%c %c", s[i][j], j == DIM - 1 ? ' ' : '|');
      if (i != DIM - 1) printf("\n--------");
      putchar('\n');
   }
}

int jogo_acabou(char s[DIM][DIM]) {
   // Testar linhas
   for (int i = 0; i < DIM; i++)
      if (s[i][0] == s[i][1] && s[i][0] == s[i][2] && s[i][0] != ESPACO) return 1;

   // Testar colunas
   for (int j = 0; j < DIM; j++)
      if (s[0][j] == s[1][j] && s[0][j] == s[2][j] && s[0][j] != ESPACO) return 1;

   // Testar diagonal principal
   if (s[0][0] == s[1][1] && s[0][0] == s[2][2] && s[0][0] != ESPACO) return 1;

   // Testar diagonal secundária
   if (s[0][2] == s[1][1] && s[0][2] == s[2][0] && s[0][2] != ESPACO) return 1;

   return 0;
}

int main(void) {
   char velha[DIM][DIM];
   int posx, posy;
   char ch = '0';
   int n_jogadas = 0;

   inic(velha);
   while (1) {
      mostra(velha);
      printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
      scanf("%d %d", &posx, &posy);
      posx--; posy--;

      if (velha[posx][posy] == ESPACO) {
         velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
         n_jogadas++;
         if (jogo_acabou(velha)) {
            mostra(velha);
            printf("%c ganhou!!!\n", ch);
            return 0;
         }
      } else
         printf("Posição já ocupada\nJogue Novamente!!!\n");
      
      if (n_jogadas == DIM * DIM)
         break;
   }

   mostra(velha);

   return 0;
}