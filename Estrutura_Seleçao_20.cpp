/* 20. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou nao.*/ 

//Algoritmo.20               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int id;
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
      printf("\n Digite sua idade atual.\n ");
      scanf("%d",&id);
      if((id>=18))
      printf("\n Voce ja atingiu a maioridade!!!\n");
      else if((id<18))
      printf("\n Voce ainda nao atingiu a maioridade!!!\n");
      printf("\n\n");
      system("pause");
}
