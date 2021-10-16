/*52.A conversão de Celsius para Fahrenheit é obtida pela equação abaixo.Escreva uma tabela de graus Celsius e Fahrenheit,
com graus Celsius variando de 32 até 10(de 1 em 1).
    fahren=(9.0/5.0)*celsius+32.0
    
Algoritmo.52*/   
#include<stdio.h>
#include<conio.h>
#define MAX_CELSIUS 100
#define VALOR_INI 32
#define PASSO 2
main()
{
      int celsius;
      float fahren;
      printf("GRAUS \tGRAUS\n");
      printf("CELSIUS FAHRENHEIT\n");
      printf("------- ----------\n");
      celsius = VALOR_INI;
      while (celsius <= MAX_CELSIUS)
      {
            fahren = (9.0 / 5.0) * celsius + 32.0;
            printf("%5d%12.2f\n", celsius, fahren);
            celsius = celsius + PASSO;
      }
      getch();
}
