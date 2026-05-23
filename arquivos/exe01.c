/**
 * Implemente o utilitário line.c que mostre o conteúdo de um arquivo recebido na linha de comando, mostrando para cada linha o número respectivo.
 * 
 * $type dados.dat
 * As armas
 * Os Barões
 * Assinalados
 * Luis de Camões
 * 
 * $type dados.dat
 * 1: As armas
 * 2: Os Barões
 * 3: Assinalados
 * 4: Luis de Camões
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 500
#define ERROR_SINTAXE 1
#define ERROR_OPENFILE 2

void fatal_error(int, char *);

int main(int argc, char **argv) {
   if (argc != 2)
      fatal_error(ERROR_SINTAXE, argv[0]);

   FILE *input_file = fopen(argv[1], "r");
   char string[MAX_STR];
   int line = 0;

   if (!input_file)
      fatal_error(ERROR_OPENFILE, argv[1]);

   while (fgets(string, MAX_STR, input_file))
      fprintf(stdout, "%d: %s", ++line, string);
   putchar('\n');

   fclose(input_file);
   return 0;
}

void fatal_error(int error_code, char *filename) {
   char msg[200];

   switch (error_code) {
      case 1: 
         strcpy(msg, "Sintaxe:\n\t%s arquivo\n");
         break;
      
      case 2:
         strcpy(msg, "Não foi possível abrir o arquivo %s!\n");
         break;
   }

   fprintf(stderr, msg, filename);
   exit(error_code);
}