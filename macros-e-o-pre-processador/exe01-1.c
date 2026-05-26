/**
 * Suponha as seguintes constantes simbólicas declaradas
 * 
 * #define TAXA_ICMS1 5
 * #define TAXA_ICMS2 17
 * 
 * Defina a macro Val_ICMS(Salario) que deverá devolver o valor do ICMS de um salário, sabendo que a taxa de ICMS a ser aplicado ao salario é TAXA_ICMS1 se o salário é menor que 10000, ou TAXA_ICMS2, caso contrário
 */

#include <stdio.h>

#define TAX_ICMS1 5
#define TAX_ICMS2 17
#define VAL_ICMS(salary) (((salary) < 10000) ? (salary * TAX_ICMS1 / 100): (salary * TAX_ICMS2 / 100))

float net_salary(float, int);

int main(void) {
   float salary;
   printf("Informe o valor do salário: ");
   scanf("%f", &salary);
   printf("Taxa ICMS = %.2f\nSalário descontado = %.2f\n", VAL_ICMS(salary), net_salary(salary, VAL_ICMS(salary)));

   return 0;
}

float net_salary(float salary, int tax) {
   return salary - tax;
}