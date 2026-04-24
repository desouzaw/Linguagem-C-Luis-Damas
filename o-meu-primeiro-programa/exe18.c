/**
 * Experimente a função puts("Hello World"); (put string) para escrever a string "Hello World" e indique qual a diferença entre esta e a função printf. (Nota: Essa função também faz parte do stdio.h)
 */

#include <stdio.h>

void main(void) {
   puts("Hello World");

   /**
      A função `puts`, diferentemente da `printf`, não permite a formatação do texto, apenas a sua exibição direta; nesse sentido, a função apresenta-se como uma alternativa mais simples.
      Outro ponto importante é que a `puts` posiciona o cursor em uma nova linha automaticamente após exibir a string, enquanto a printf só fará o mesmo se o caractere de nova linha (`\n`) for explicitamente adicionado.
    */
}