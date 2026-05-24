#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>

#define MAX_LENGTH 100
#define MAX_PERSONS 30
#define STATUS_ACTIVATED 1

typedef struct {
   char name[MAX_LENGTH];
   int age;
   float salary;
   int activated;
} Person;

void menu(void);
void insert(Person *);
void clear_buffer(void);
void show_register(Person);
void delete(Person *);
void alter(Person *);
void submenu(void);

int main(void) {
   Person persons[MAX_PERSONS];
   int option;

   do {
      menu();
      scanf("%d", &option);
      clear_buffer();
      system("clear");

      switch (option) {
         case 1: {
            int i = 0;
            while (persons[i].activated)
               i++;
            insert(&persons[i]);
            break;
         }

         case 2: {
            char name[MAX_LENGTH];
            printf("Insira o nome registrado em que será feita as alterações: ");
            fgets(name, MAX_LENGTH, stdin);

            for (int i = 0; i < MAX_PERSONS; i++) {
               if (!strcasecmp(persons[i].name, name) && persons[i].activated == STATUS_ACTIVATED) {
                  alter(&persons[i]);
                  break;
               }
               else if (i == MAX_PERSONS - 1) {
                  printf("-------------------------\n");
                  printf("Registro não encontrado!\n");
                  printf("-------------------------\n");
               }
            }
            break;
         }

         case 3: {
            char name[MAX_LENGTH];
            printf("Insira o nome registrado: ");
            fgets(name, MAX_LENGTH, stdin);

            for (int i = 0; i < MAX_PERSONS; i++) {
               if (!strcasecmp(persons[i].name, name) && persons[i].activated == STATUS_ACTIVATED) {
                  delete(&persons[i]);
                  break;
               }
               else if (i == MAX_PERSONS - 1) {
                  printf("-------------------------\n");
                  printf("Registro não encontrado!\n");
                  printf("-------------------------\n");
               }
            }
            break;
         }

         case 4:  {
            int actives = 0;
            for (int i = 0; i < MAX_PERSONS; i++)
               if (persons[i].activated == STATUS_ACTIVATED) {
                  show_register(persons[i]);
                  actives++;
               }
            if (!actives) {
               printf("-------------------------\n");
               printf("Não há registros\n");
               printf("-------------------------\n");
            }
            break;
         }

         case 5: {
            int option;

            do {
               submenu();
               scanf("%d", &option);
               system("clear");

               switch (option) {
                  case 1: {
                     int count = 0;
                     int age1, age2;
                     printf("Digite a menor idade: ");
                     scanf("%d", &age1);
                     printf("Digite a maior idade: ");
                     scanf("%d", &age2);
                     system("clear");

                     for (int i = 0; i < MAX_PERSONS; i++) {
                        if (persons[i].age >= age1 && persons[i].age <= age2 && persons[i].activated == STATUS_ACTIVATED) {
                           show_register(persons[i]);
                           count++;
                        }
                        else if (i == MAX_PERSONS - 1 && !count) {
                           printf("-------------------------\n");
                           printf("Registro não encontrado!\n");
                           printf("-------------------------\n");
                        }
                     }
                     break;
                  }

                  case 2: {
                     int count = 0;
                     char name[MAX_LENGTH];
                     printf("Insira o nome: ");
                     clear_buffer();
                     fgets(name, MAX_LENGTH, stdin);
                     system("clear");

                     for (int i = 0; i < MAX_PERSONS; i++) {
                        if (!strcasecmp(persons[i].name, name) && persons[i].activated == STATUS_ACTIVATED) {
                           show_register(persons[i]);
                           count++;
                        }
                        else if (i == MAX_PERSONS - 1 && !count) {
                           printf("-------------------------\n");
                           printf("Registro não encontrado!\n");
                           printf("-------------------------\n");
                        }
                     }
                     break;
                  }
               }
            } while (option);
         }
      }
   } while (option);

   return 0;
}

void menu(void) {
   puts("[1] Inserir Registro");
   puts("[2] Alterar Registro");
   puts("[3] Apagar Registro");
   puts("[4] Listar Registros");
   puts("[5] Pesquisas");
   puts("[0] Sair");
}

void insert(Person *person) {
   printf("Nome: ");
   fgets(person->name, MAX_LENGTH, stdin);
   printf("Idade: ");
   scanf("%d", &person->age);
   printf("Salário: ");
   scanf("%f", &person->salary);
   person->activated = STATUS_ACTIVATED;

   printf("-------------------------\n");
   printf("Registro feito com sucesso!");
   printf("\n-------------------------\n");
}

void clear_buffer(void) {
   int c;
   while ((c = getchar()) != EOF && c != '\n');
}

void show_register(Person p) {
   printf("NOME: %s", p.name);
   printf("IDADE: %d\n", p.age);
   printf("SALÁRIO: %f\n", p.salary);
   printf("-------------------\n");
}

void delete(Person *p) {
   p->activated = 0;
   printf("-------------------------\n");
   printf("Registro deletado com sucesso!");
   printf("\n-------------------------\n");
}

void alter(Person *person) {
   printf("Nome: ");
   fgets(person->name, MAX_LENGTH, stdin);
   printf("Idade: ");
   scanf("%d", &person->age);
   printf("Salário: ");
   scanf("%f", &person->salary);

   printf("-------------------------\n");
   printf("Alteraões feitas com sucesso!");
   printf("\n-------------------------\n");
}

void submenu(void) {
   puts("[1] Pesquisar por intervalos de idades");
   puts("[2] Pesquisar por nome");
   puts("[0] Voltar");
}