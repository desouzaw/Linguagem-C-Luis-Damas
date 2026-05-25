/**
 * Suponha que se pretende implementar uma lista dinâmica de números positivos em que os números ímpares fiquem todos no ínicio da lista e os pares fiquem todos juntos no final da lista
 * 
 * a) Defina o novo tipo LISTA que suporte essa definição
 * 
 * b) Implemente a função Inic que permite fazer a carga inicial de qualquer dessas listas
 * 
 * c) Implemente a função Inserir, que coloca na lista o inteiro positivo enviado à função. Devolve o número inserido ou 0 (zero), caso haja algum problema
 * 
 * d) Implemente a função Retirar, que retira da lista a primeira ocorrência de um determinado valor, liberando memória associada. Devolve o elemento retirado ou zero, caso este não exista
 * 
 * e) Implemente a função Listar, que coloca na tela todos os elementos existentes
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
   unsigned int n;
   struct Node *prox;
} NODE;

typedef struct {
   NODE *node;
} LIST;

void inic(LIST *);
unsigned int insert(LIST *, unsigned int);
unsigned int delete(LIST *, unsigned int);
void show(LIST *);

int main(void) {
   LIST list;
   inic(&list);
   show(&list);
   insert(&list, 3);
   show(&list);
   insert(&list, 90);
   show(&list);
   insert(&list, 1);
   show(&list);
   insert(&list, 12);
   show(&list);
   insert(&list, 6);
   show(&list);
   insert(&list, 5);
   show(&list);
   delete(&list, 1);
   show(&list);
   delete(&list, 3);
   delete(&list, 5);
   delete(&list, 12);
   show(&list);
   delete(&list, 90);
   delete(&list, 6);
   show(&list);

   return 0;
}

void inic(LIST *list) {
   list->node = NULL;
}

unsigned int insert(LIST *list, unsigned int n) {
   if (n == 0) return 0;

   NODE *new_node = (NODE *) malloc(sizeof(NODE));
   new_node->n = n;
   new_node->prox = NULL;

   if (list->node == NULL)
      list->node = new_node;
   else if (n % 2) {
      new_node->prox = list->node;
      list->node = new_node;
   } else {
      NODE *current = list->node;
      while (current->prox)
         current = current->prox;
      current->prox = new_node;
   }

   return n;
}

unsigned int delete(LIST *list, unsigned int n) {
   if (list == NULL || list->node == NULL)
      return 0;

   NODE *current = list->node;
   NODE *previous = NULL;
   
   if (current->n == n) {
      list->node = current->prox;
      free(current);
      return n;
   }

   while (current != NULL && current->n != n) {
      previous = current;
      current = current->prox;
   }

   if (current == NULL)
      return 0;

   previous->prox = current->prox;
   free(current);

   return n;
}

void show(LIST *list) {
   if (list == NULL || list->node == NULL) {
      printf("Lista vazia!\n");
      return;
   }

   NODE *current = list->node;

   printf("Elementos da lista: ");
   while (current != NULL) {
      printf("%u ", current->n);
      current = current->prox;
   }
   putchar('\n');
}