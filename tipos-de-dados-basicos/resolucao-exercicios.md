# Resolução dos exercícios propostos no capítulo: Tipos de dados básicos

1. **Indique quais das seguintes declarações estão corretas.** <br />
   [ ] a) `y int;` <br />
   [ ] b) `int ;` <br />
   [ ] c) `integer x;` <br />
   [ ] d) `inta , b;` <br />
   **[X] <span style="color:green"> e)  `float f, g , c;`**</span> <br />
   [ ] f) `char ch1=ch2='A';` <br />
   **[X] <span style="color:green"> g) `char ch1 ='A', ch2='A';`**</span>
   <br />

2. **Uma variável inteira, quando é declarada, é sempre iniciada com...** <br />
   [ ] a) 0 (Zero) <br />
   [ ] b) 1 (Um) <br />
   **[X] <span style="color:green"> c) Um valor aleatório**</span> <br />
   [ ] d) Um valor negativo
   <br />

3. **Indique, na sequinte lista, quais os identificadores corretos e incorretos de variáveis:** <br />
   **[X] <span style="color:green"> a) Valor**</span> <br />
   [ ] b) &xvar <br />
   [ ] c) dez% <br />
   [ ] d) a+b <br />
   **[X] <span style="color:green"> e) _Kabonga**</span>  <br />
   **[X] <span style="color:green"> f) MENOS**</span> <br />
   [ ] g) 10a  <br />
   **[X] <span style="color:green"> h) a10**</span> <br />
   [ ] i) main  <br />
   **[X] <span style="color:green"> j) F1**</span>
   <br />

4. **O nome de uma variável...** <br />
   **[X] <span style="color:green"> a) Deve indicar aquilo que ela armazena**</span> <br />
   [ ] b) Deve ser o menor possível <br />
   [ ] c) Deve ser o maior possível  <br />
   **[X] <span style="color:green"> d) Deve ser o mais explícito possível**</span> <br />
   [ ] e) Deve ser todo escrito em maiúsculas <br />
   **[X] <span style="color:green"> f) Pode, mas não deve, começar por underscore (_)**</span> <br />
   **[X] <span style="color:green"> g) Pode conter mais do que um caractere**</span>
   <br />

5. **Associe os seguintes tipos aos correspondentes formatos de leitura e escrita.** <br />
   **[ 1 ]**`int` &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; **[ 2 ]**`%e`      
   **[ 2 ]**`float` &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&nbsp; **[ 5, 6 ]**`%ld`      
   **[ 3 ]**`char` &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&nbsp;&nbsp; **[ 2 ]**`%f`      
   **[ 4 ]**`short int` &emsp;&emsp;&emsp;&emsp;&emsp; **[ 1 ]**`%d`      
   **[ 5 ]**`long int` &emsp;&emsp;&emsp;&emsp;&emsp;&nbsp;&nbsp; **[ 4 ]**`%hd`      
   **[ 6 ]**`signed long int` &emsp;&emsp; **[ 3 ]**`%c` 
   <br />    

6. **Indique quais das seguintes afirmações são verdadeiras e quais são falsas.** <br />
   a) O tipo float reserva espaço em memória para um real com precisão simples, enquanto o tipo double reserva espaço para uma variável com precisão dupla. - **verdadeira** <br />
   b) O tipo char pode ter os prefixos long e short. - **falsa** <br />
   c) O tipo char pode ter os prefixos signed e unsigned. - **verdadeira** <br />
   d) Uma variável declarada como unsigned pode comportar valores superiores a uma outra que seja declarada como signed. - **verdadeira** <br />
   e) Uma variável do tipo char pode armazenar caracteres individuais ou conjuntos de caracteres também denominados por string. - **falsa** <br />
   f) Uma variável do tipo char pode armazenar vários caracteres, desde que todos eles sejam caracteres ASCII. - **falsa** <br />
   g) Uma variável do tipo char pode armazenar vários caracteres, desde que sejam caracteres especiais. - **falsa** <br />
   h) O operador módulo (`%`) não pode ser utilizado em reais - **verdadeira**
   <br /> 
   <br />

7. **Identifique os erros de compilação que seriam detectados nos seguintes programas:** <br />
   7.1
   ```
   /*
    * Copyright: Asneira Suprema Software!!!
    */

   #include <stdio.h>
   main()
   {
      int x, y, x;
   }
   ```
   - Em C, uma variável só pode ser declarada uma única vez dentro de um mesmo escopo. Uma redeclaração, como ocorre com o identificador 'x' no programa, ocasiona um erro de compilação.
   ___

   7.2
   ```
   /*
    * Copyright: Asneira Suprema Software!!!
    */

   #include <stdio.h>
   main()
   {
      int x, y;
      float int = 5.23;
      printf("%f", int);
   }
   ```
   - Na declaração de uma variável, após especificar o tipo de dado, deve-se definir o seu identificador. Este deve seguir certas regras de nomeação; uma delas estabelece que não se podem utilizar palavras reservadas da linguagem (como 'int', no exemplo dado). O programa não será compilado devido a essa violação sintática.
   ---

   7.3
   ```
   /*
    * Copyright: Asneira Suprema Software!!!
    */

   #include <stdio.h>
   main()
   {
      int x=y=z=0;
      printf("%d %d %d \n", x, y, z);
   }
   ```
   - C não permite atribuições encadeadas diretamente na declaração de variáveis. Isso ocorre devido à forma como a operação de atribuição é processada: o compilador avalia primeiro o operando da direita. No código de exemplo, o erro acontece porque o compilador tenta atribuir valores a 'y' e 'z' antes que eles tenham sido formalmente declarados, impedindo a compilação.
   <br />

8. **Embora os programas que se seguem não tenham erros de compilação, identifique as causas de seu possível mau funcionamento.**
 <br />  8.1
   ```
   /*
    * Copyright: Asneira Suprema Software!!!
    */

   #include <stdio.h>
   main()
   {
            int n;
      scanf("Introduza um N° %d", &n);
      printf("O n° = %d\n", n);
   }
   ```
   - Se um texto for passado dentro da string de formato da função scanf, ele não será exibido na tela. Em vez disso, esse texto torna-se um padrão obrigatório que a função esperará encontrar na entrada de dados. Caso a entrada fornecida pelo usuário não seja exatamente igual ao padrão definido, a leitura não será concluída corretamente.
   No exemplo de código fornecido, um literal de string foi passado na chamada da função. Se o usuário não digitar exatamente esse literal antes do número, o scanf interromperá a leitura, falhando na atribuição do valor à variável n. Como a variável não foi inicializada e a atribuição falhou, ao tentar imprimir seu valor, o resultado exibido na tela será um "lixo de memória".
   <br />

   8.2
   ```
   /*
    * Copyright: Asneira Suprema Software!!!
    */

   #include <stdio.h>
   main()
   {
            int n;
      printf("Introduza um N°");
      scanf("%d\n", &n);
      printf("O n° = %d\n", n);
   }
   ```
   - No código acima, o caractere de nova linha (`\n`) passado na string de formato do `scanf` (logo após o especificador de inteiro `%d`) não terá o mesmo efeito que teria na função `printf`.
   Em vez de gerar um efeito visual de quebra de linha durante a execução, ele instrui o `scanf` a ignorar qualquer caractere que represente "espaço em branco" (como espaços, tabulações e quebras de linha). Assim, quando o usuário digitar o valor para a variável e pressionar `Enter`, essa tecla não finalizará a leitura, pois será ignorada pela função. Para interromper esse ciclo, será necessário que o usuário insira qualquer outro caractere (não branco) e pressione `Enter` novamente, permitindo que o programa retorne à execução normal.
   <br />

   8.3
   ```
   /*
    * Copyright: Asneira Suprema Software!!!
    */

   #include <stdio.h>
   main()
   {
            int n;
      printf("Introduza um N°");
      scanf("%f", &n);
      printf("O n° = %f\n", n);
   }
   ```
   - No código de exemplo, existe uma incompatibilidade de tipos tanto na função `scanf` quanto na função `printf`. Está sendo feita a leitura de um dado do tipo `float`, mas a variável associada a essa atribuição está declarada como `int`. Como existe uma diferença na disposição dos bits (ou em como esses bits são armazenados), o valor real que será informado não será atribuído corretamente.
   <br />

9. **Escreva um programa que solicite ao usuário uma determinada data e a mostre em seguida no formato dd/mm/aaaa**
   - [resolução (exe09.c)](./exe09.c)
   <br />

10. **Escreva um programa que solicite ao usuário uma determinada data no formato aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaaa**
   - [resolução (exe10.c)](./exe10.c)
   <br />






