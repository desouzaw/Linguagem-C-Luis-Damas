/**
 * Implemente um programa que liste todas as variáveis de ambiente existentes no seu computador
 */

#include <stdio.h>

int main(int argc, char **argv, char **envp) {
   while (*envp)
      puts(*envp++);

   return 0;
}