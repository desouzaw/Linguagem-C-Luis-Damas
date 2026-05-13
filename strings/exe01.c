/**
 * Declare uma string com a capacidade de armazenar um nome com 25 caracteres
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 26

int main(void) {
   char str[SIZE_STRING];

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   str[strcspn(str, "\n")] = '\0';
   printf("A %s tem %lu caracteres\n", str, strlen(str));
   
   return 0;
}