/**
 * Suponha que se pretenda implementar uma lista estática de registros constituídos por um número positivo e por um nome com 40 caracteres
 * 
 * A lista em questão não poderá ter mais que MAX registros (valor definido pelo programador)
 * 
 * a) Defina um novo tipo que represente a definição anterior de registro.
 *    Defina um novo tipo denominado lista, que suporte esta definição.
 *    Declare a variável lista que suporte fisicamente, a lista a ser implementada
 * 
 * b) Implemente a função inic, que inicia a lista
 * 
 * c) Implemente a função inserir, que permite adicionar um registro à lista. Retorna a posição em que foi introduzido ou -1, caso a lista esteja cheia
 * 
 * d) Implemente a função save, que faz a escrita em disco de todos os registros existentes na lista. o nome do arquivo deverá ser passado como parâmetro da função. A função deverá devolver 1, se tudo correr bem, ou 0, caso contrário.
 * 
 * e) Implemente a função load, que faz a leitura dos registros existentes em arquivo (já aberto para leitura) e os insere na lista, levando em consideração aqueles que já possam estar lá. Retorna 1, caso tudo esteja bem, ou 0, caso contrário
 * 
 * f) Implemente a função listar, que coloca na tela todos os elementos da lista, linha a linha
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

typedef struct {
   int n;
   char nome[41];
} REGISTRO;

typedef struct {
   REGISTRO v[MAX];
   unsigned int conta;
} LISTA;

void inic(LISTA *);
int inserir(LISTA *, REGISTRO);
int cheia(LISTA);
int save(LISTA, char *);
int load(LISTA *, char *);
void listar(LISTA);

int main() {
   LISTA lista;
   REGISTRO r = {100, "TESTE"};
   
   inic(&lista);
   
   for (int i = 0; i < MAX; i++) {
      r.n = i + 1;
      inserir(&lista, r);
   }

   listar(lista);
   
   save(lista, "dados_exe02.dat");
   
   inic(&lista);
   
   load(&lista, "dados_exe02.dat");
   listar(lista);
   
   return 0;
}

void inic(LISTA *lista) {
   lista->conta = 0;
}

int cheia(LISTA lista) {
   return lista.conta == MAX;
}

int inserir(LISTA *lista, REGISTRO r) {
   if (cheia(*lista))
      return -1;
   lista->v[lista->conta] = r;
   return lista->conta++;
}

int save(LISTA lista, char *nome_arquivo) {
   FILE *fp = fopen(nome_arquivo, "wb");
   if (!fp) return 0;
   
   for (int i = 0; i < lista.conta; i++) {
      if (fwrite(&lista.v[i], sizeof(REGISTRO), 1, fp) != 1) {
         fclose(fp);
         return 0;
      }
   }
   fclose(fp);
   return 1;
}

int load(LISTA *lista, char *nome_arquivo) {
   FILE *fp = fopen(nome_arquivo, "rb");
   if (!fp) return 0;
   
   REGISTRO r;
   while (fread(&r, sizeof(REGISTRO), 1, fp) == 1) {
      if (inserir(lista, r) == -1) {
         fclose(fp);
         return 0;
      }
   }
   fclose(fp);
   return 1;
}

void listar(LISTA lista) {
   for (int i = 0; i < lista.conta; i++)
      printf("%d %s\n", lista.v[i].n, lista.v[i].nome);
}