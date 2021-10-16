/* 01.Faça um programa que ao receber 2 valores inteiro mostre todos os valores entre um valor inicial e outro valor final.*/

//Algoritmo.Extra.01
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int vl_i,vl_f,i,vl_e=1;
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
      printf(" *            Estrutura De Repetiçao For While            *\n");
      printf(" *========================================================*\n");
      printf("\n Digite o valor inicial.\n ");
      scanf("%d",&vl_i);
      printf("\n Digite o valor final.\n ");
      scanf("%d",&vl_f);
      system("cls");
      printf("\n OS VALORES EXISTENTE ENTRE %d E %d SAO:",vl_i,vl_f);
      printf("\n");
      for (i=vl_i;i<=vl_f;i++)
      {
          printf("\n O %do Valor E %d. ",vl_e,i);
          vl_e++;
          }
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
}
