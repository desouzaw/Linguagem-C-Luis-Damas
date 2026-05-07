/**
 * Implemente a função
 * void transpor(int v[MAX][MAX])
 * Que transpõe a matriz v com MAX por MAX elementos
 */

#include <stdio.h>

void get_elements(int MAX, int matrix[MAX][MAX]);
void show_matrix(int MAX, int matrix[MAX][MAX]);
void transpor(int MAX, int matrix[MAX][MAX]);

int main(void) {
   int MAX;
   printf("Defina a ordem da matriz: ");
   scanf("%d", &MAX);
   int matrix[MAX][MAX];
   get_elements(MAX, matrix);
   printf("\nMatriz original:\n");
   show_matrix(MAX, matrix);
   transpor(MAX, matrix);
   printf("\nMatriz Transposta\n");
   show_matrix(MAX, matrix);

   return 0;
}

void get_elements(int MAX, int matrix[MAX][MAX]) {
   for (int i = 0; i < MAX; i++)
      for (int j = 0; j < MAX; j++) {
         printf("Informe o valor do elemento [%d][%d]: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
}

void show_matrix(int MAX, int matrix[MAX][MAX]) {
   for (int i = 0; i < MAX; i++) {
      for (int j = 0; j < MAX; j++)
         printf("%3d", matrix[i][j]);
      putchar('\n');
   }
}

void transpor(int MAX, int matrix[MAX][MAX]) {
   for (int i = 0; i < MAX; i++) {
      for (int j = 0; j < MAX; j++) {
         if (i == j) continue;
         if (j > i) {
            int aux = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = aux;
         }
      }
   }
}