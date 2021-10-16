/* 4.Faça um programa que leia o valor N inteiro e positivo calcule e mostre o valor de E conforme a formula a seguir:
          [E=1+¹/1!+¹/2!+¹/3!...+¹/N!] */

//Algoritmo.4
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{     
      float e=1,i;
      int n,fat=1;
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
      printf(" *            Estrutura De Repeticao for while            *\n");
      printf(" *========================================================*\n");
      printf("\n Entre com um numero inteiro positivo.\n ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       e+=(1/fat*i);
                       }
                       printf("\n E=1+(1/1!)+(1/2!)+(1/3!)...+(1/N!)");
                       printf("\n A expresao tem valor E=%0.0f\n",e);
                       printf("\n\n");
                       system("pause");
}      
