/**
 * Implemente a seguinte a função
 * char *_strchr(char *s, char ch)
 * que retorna o endereço da última ocorrência de ch em s; caso não exista retorna NULL
 * 
 * Escreva ainda um programa que solicite um nome completo e escreva na tela apenas o sobrenome
 */

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 100

char *_strchr(char *, char);
void print_surname(char *);
void clear_buffer(void);
void trim_newline(char *);

int main(void) {
   char name[SIZE_STRING], str[SIZE_STRING], ch;

   puts("Informe uma string:");
   fgets(str, SIZE_STRING, stdin);
   trim_newline(str);
   puts("Qual caractere vc quer saber o endereço da última ocorrência na string:");
   ch = getchar();

   char *idx = _strchr(str, ch);
   if (idx) {
      printf("Endereço da última ocorrência de %c em %s é %p\n", ch, str, (void *) idx);
      puts(idx);
   }
   else
      puts("Caractere não ocorre na string");

   puts("Informe um nome completo:");
   clear_buffer();
   fgets(name, SIZE_STRING, stdin);
   trim_newline(name);
   print_surname(name);

   return 0;
}

char *_strchr(char *s, char ch) {
   char *ptr = s + strlen(s);

   while (--ptr >= s)
      if (*ptr == ch)
         return ptr;

   return NULL;
}

void print_surname(char *name) {
   char *last_space = _strchr(name, ' ');

   if (last_space)
      puts(++last_space);
   else
      puts(name);
}

void clear_buffer(void) {
   int c;
   while ((c = getchar()) != '\n' && c != EOF);
}

void trim_newline(char *s) {
   s[strcspn(s, "\n")] = '\0';
}