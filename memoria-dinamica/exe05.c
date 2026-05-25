/**
 * Suponha um novo tipo em C denominado REG capaz de suportar os seguintes dados: Nome(30 caracteres), Altura e Idade
 * 
 * Suponha, igualmente, um arquivo denominado DADOS.DAT com um conjunto de registros do tipo REG gravados sequencial e individualmente através da instrução
 * 
 * fwrite(&r, sizeof(REG), 1, fp);
 * 
 * Suponha, também, que o arquivo já foi aberto corretamente e que está disponível através da variável global fp
 * 
 * a) Defina o tipo REG que suporte a definição acima apresentada
 * 
 * b) Implemente a função void Listar(void) que mostra o nome de todos os indivíduos existentes no arquivo
 * 
 * c) Implemente a função int N_Maiores(int n) que devolve o número de indivíduos existentes no arquivo com idade superior a n anos
 * 
 * d) Implemente a função long N_Registros() que devolve o número total de registros existentes no arquivo sem ter que contá-los um a um
 * 
 * e) Implemente a função ___ Carrega_Estrutura(__ *ptr) completando os tipos de dados assinalados pro ___. Essa função cria dinamicamente uma estrutura capaz de suportar todos os registros existentes no arquivo, independentemente do seu número (desde que a memória existente no computador o permita). Em seguida, copia todos os registros do arquivo para essa estrutura. Devolve o endereço de memória onde a estrutura foi criada.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
   char name[31];
   float height;
   int age;
} REG;

FILE *fp;

void show_names(void);
int count_older_than(int age_limit);
long count_records(void);
REG* load_structure(long *record_count);

int main(void) {
   fp = fopen("DADOS.DAT", "rb");
   if (fp == NULL) {
      printf("Não foi pssível abrir o arquivo DADOS.DAT\n");
      return 1;
   }

   show_names();
   printf("Quantidade de pessoas com mais de 20 anos: %d\n", count_older_than(20));
   printf("Quantidade de registros totais: %ld\n", count_records());

   long total_loaded = 0;
   REG *regs = load_structure(&total_loaded);

   if (regs != NULL)
      printf("%ld registros para a memoria.\n\n", total_loaded);
      
   for (long i = 0; i < total_loaded; i++) {
      printf("  Nome:   %s\n", regs[i].name);
      printf("  Altura: %.2fm\n", regs[i].height);
      printf("  Idade:  %d anos\n\n", regs[i].age);
   }
   
   free(regs);

   fclose(fp);
   return 0;
}

void show_names(void) {
   REG person;
   rewind(fp);

   while (fread(&person, sizeof(REG), 1, fp) == 1) {
      printf("Nome: %s\n", person.name);
   }
}

int count_older_than(int age_limit) {
   REG person;
   int counter = 0;

   rewind(fp);

   while (fread(&person, sizeof(REG), 1, fp) == 1) {
      if (person.age > age_limit) {
         counter++;
      }
   }

   return counter;
}

long count_records(void) {
   fseek(fp, 0, SEEK_END);

   long total_bytes = ftell(fp);
   long total_records = total_bytes / sizeof(REG);
   
   return total_records;
}

REG* load_structure(long *record_count) {
   long total = count_records();
   *record_count = total;

   if (total == 0) {
      return NULL;
   }

   REG *array = (REG *) malloc(total * sizeof(REG));
   if (array == NULL) {
      printf("Falha na alocação de memória!\n");
      *record_count = 0;
      return NULL;
   }

   rewind(fp);
   fread(array, sizeof(REG), total, fp);

   return array;
}