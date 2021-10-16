/* 8.Faça um programa que calcule e mostre o produto dos numeros primos entre 92 e 1478.*/

//Algoritmo.8
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{
      int totD=0,j,i,x,y;
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
      printf("\n Digite O Valor Que Deseja Inciar A Verificacao. ?\b");
      scanf("%d",&x);
      printf("\n Digite O Valor Que Deseja Finalizar A Verificacao. ?\b");
      scanf("%d",&y);
      system("cls"); 
      printf("\n Os Numeros Primos entre %d e %d Sao:\n",x,y);
      for(i=x;i<=y;i++)
      {
          totD=0;
          for(j=1;j<=i;j++)
          {
              if(i%j==0)
              totD++;
              }
              if(totD==2)
              {
                         printf(" %d\t",i);
                         }
      }
      printf ("\n\n");
      system("pause"); 
} 
