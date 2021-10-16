/* 3.Faça um programa que leia um valor n,inteiro e posistivo calcule e mostre a seguinte soma:
          S=1+(¹/2)+(¹/3)+(¹/4)+...(¹/n)*/

//Algoritmo.3
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<acssi>
main()
{     
      float s=1,i;
      int n;
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
      printf(" *            Estrutura De Repetiçao for while            *\n");
      printf(" *========================================================*\n");
      printf("\n Entre com um numero inteiro positivo.\n ");
      scanf("%d",&n);
      for(i=2;i<=n;i++)
      {
                       s+=(1/i);
                       }
                       printf("\n S=1+(1/2)+(1/3)+(1/4)+...(1/n)");
                       printf("\n A soma da expresao e S=%0.2f\n",s);
                       printf("\n\n");
                       system("pause");
}      
