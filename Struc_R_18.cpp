/* 18.Faça um programa que ao receber um numero e que calcule mostre a tabuada desse numero!!!*/

//Algoritmo.18
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,tab,res;
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
      printf("\n Digite o numero que deseja vizualizar sua Tabuada.\n ");
      scanf("%d",&tab);
      system("cls");
      printf("\n A TABAUADA DO %d E:",tab);
      printf("\n");
      for (i=0;i<=10;i++)
      {
          res=(tab*i);
          printf("\n %dx%d=%d ",tab,i,res);
          }
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
}
