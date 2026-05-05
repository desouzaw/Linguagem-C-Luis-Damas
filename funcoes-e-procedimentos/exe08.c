/**
 * float max(float x, float y, float w)
 * Devolve o maior dos valores x, y e w
 */

#include <stdio.h>

float max(float, float, float);

int main(void) {
   float x, y, w;

   puts("Informe 3 valores reais:");
   scanf("%f%f%f", &x, &y, &w);
   printf("O maior valor é %.2f\n", max(x, y, w));

   return 0;
}

float max(float x, float y, float w) {
   if (x > y && x > w) return x;
   if (y > x && y > w) return y;
   return w;
}