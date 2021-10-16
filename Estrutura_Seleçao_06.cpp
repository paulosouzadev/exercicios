/* 6. Uma empresa deseja dar um aumento de 30% aos funcionarios com salarios inferiores a R$500,00.
Faça um programa que recebe o salario do funcionario e mostre o valor do salarios reajustado ou uma mesangem,
caso o funcionario nao tenha direito ao aumento.*/

//Algoritmo.6
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Inicio
main()
{
      float sal_a,n_sal;
      printf(" *========================================================*\n");
      printf(" |        ___   ___ _________ ___   ___ _________         |\n");
      printf(" |        XXX   XXX XXXXXXXXX XXX_  XXX XXXXXXXXX         |\n");
      printf(" |        XXX   XXX XXXXXXXXX XXXX_ XXX XXXXXXXXX         |\n");
      printf(" |        XXX   XXX XXX____   XXXXX_XXX XXX___XXX         |\n");
      printf(" |        XXX   XXX XXXXXXX   XXXXXXXXX XXXXXXXXX         |\n");
      printf(" |        XXX___XXX XXX______ XXX XXXXX XXXXXXXXX         |\n");
      printf(" |        XXXXXXXXX XXXXXXXXX XXX  XXXX XXX               |\n");
      printf(" |        XXXXXXXXX XXXXXXXXX XXX   XXX XXX               |\n");
      printf(" |                                                        |\n");
      printf(" *========================================================*\n");
      printf(" |            CAMPUS LUIZ MENEGHEL - FALM - PR            |\n");
      printf(" |     PAULO CESAR ALVES DE SOUZA - Programacao 1 - SI    |\n");	
      printf(" |          E-mails: paulosouza_band@hotmail.com          |\n");
      printf(" *========================================================*\n");	
      printf(" *             Estrutura De Selecao if else               *\n");
      printf(" *========================================================*\n");
      printf("\n Entre com seu salario atual.\n R$.");
      scanf("%f",&sal_a);
      if(sal_a<500)
      {
                   n_sal=sal_a+(sal_a*30/100);
                   printf("\n Parabens voce recebera.");
                   printf("\n Seu novo salario e %0.2f R$.\n ",n_sal);
                   }
                   else
                   printf("\n No momento voce nao tem aumento Salarial.\n ");
                   printf("\n\n");
                   system("pause");
}
