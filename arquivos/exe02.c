/**
 * Implemente o utilitário proc.c cuja sintaxe é a seguinte:
 *
 * proc [-t] arquivo
 *
 * O arquivo é constituído por expressões binárias entre dois inteiros, e o objetivo do utilitário é mostrar cada uma das expressões e o respectivo resultado.
 *
 * No final deverá ser mostrada a soma total do resultado de cada uma das expressẽos.
 *
 * Se a opção -t for passada, apenas se deve mostrar o total global das expressões
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define ERROR_SINTAXE 1
#define ERROR_OPENFILE 2
#define ERROR_PARAM 3
#define OPT_PARAM "-t"

void fatal_error(int, char *);
int calc(int, int, char);

int main(int argc, char **argv) {
   if (argc != 2 && argc != 3)
      fatal_error(ERROR_SINTAXE, argv[0]);

   if (argc == 3 && strcasecmp(OPT_PARAM, argv[argc - 2]) != 0)
      fatal_error(ERROR_PARAM, argv[argc - 2]);

   FILE *input_file = fopen(argv[argc - 1], "r");
   int num1;
   int num2;
   char operation;
   int total = 0;

   if (!input_file)
      fatal_error(ERROR_OPENFILE, argv[argc - 1]);

   while (fscanf(input_file, "%d %c %d", &num1, &operation, &num2) == 3)
   {
      int result = calc(num1, num2, operation);
      total += result;

      if (argc == 2)
         fprintf(stdout, "%d %c %d = %d\n", num1, operation, num2, result);
   }

   fclose(input_file);

   printf("%d\n", total);
   return 0;
}

void fatal_error(int error_code, char *arg) {
   switch (error_code) {
      case 1:
         fprintf(stderr, "Sintaxe:\n\t%s -[t|T] arquivo\n", arg);
         break;

      case 2:
         fprintf(stderr, "Não foi possível abrir o arquivo %s!\n", arg);
         break;

      case 3:
         fprintf(stderr, "Opção %s inválida!\n\n Use -[t|T]\n", arg);
         break;
   }
   exit(error_code);
}

int calc(int n1, int n2, char op) {
   switch (op) {
      case '+': return n1 + n2;
      case '-': return n1 - n2;
      case '/': return n1 / n2;
      case '*': return n1 * n2;
   }
}
