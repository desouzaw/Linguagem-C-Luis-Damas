/**
 * Escreva um programa que leia nomes completos do teclado e os escreva na tela no formato:
 * Sobrenome, Nome sem sobrenome
 * Nome: João Carlos Cunha
 * Cunha, João Carlos
 * Nome: Catarina BATISTA
 * Batista, Catarina
 * 
 * colocando apenas a primeira letra de cada nome em maiúsculas
 * 
 * O processamento termina quando o utilizador introduzir a string SAIR escrita com minúsculas ou maiúsculas
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_STRING 100
#define SEPARATOR ", "

int stricmp(char *, char *);
char *extract_surname(char *, char *);
char *extract_first_names(char *, char *);
void capitalize_words(char *);

int main(void) {
   char name[SIZE_STRING];

   do {
      char final_name[SIZE_STRING] = "";
      puts("Informe o nome:");
      fgets(name, SIZE_STRING, stdin);
      name[strcspn(name, "\n")] = '\0';

      if (!stricmp("sair", name)) break;

      extract_surname(name, final_name);
      strcat(final_name, SEPARATOR);
      extract_first_names(name, final_name);
      capitalize_words(final_name);
      puts(final_name);
      
   } while (stricmp("sair", name));
   return 0;
}

int stricmp(char *s1, char *s2) {
   for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
      if (tolower(s1[i]) != tolower(s2[i]))
         return s1[i] - s2[i];
   return 0;
}

char *extract_surname(char *s1, char *s2) {
   int i = strlen(s1) - 1;

   while (i >= 0 && s1[i] != ' ') i--;

   int j = 0;

   for (i++; s1[i] != '\0'; i++) {
      s2[j] = s1[i];
      j++;
   }

   s2[j] = '\0';

   return s2;
}

char *extract_first_names(char *s1, char *s2) {
   int i = strlen(s2);

   int limit = strlen(s1) - 1;
   while (limit >= 0 && s1[limit] != ' ') limit--;

   for (int j = 0; j < limit; j++) {
      s2[i] = s1[j];
      i++;
   }

   s2[i] = '\0';
   return s2;
}

void capitalize_words(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (i == 0 || s[i - 1] == ' ')
         s[i] = toupper(s[i]);
      else
         s[i] = tolower(s[i]);
   }
}