/**
 * Escreva um programa semelhante ao anterior em que sejam apresentados apenas os valores das variáveis de ambiente (à direita do sinal =)
 */

#include <stdio.h>

int main(int argc, char **argv, char **envp) {
   while (*envp) {
      while (**envp != '=' && **envp != '\0')
         (*envp)++;

      if (**envp == '=')
         puts(++(*envp));
      
      envp++;
   }
}