/* 12.Faça um programa que calcule o lucro de uma companhia de teatro se o valor valor maximo dos ingresso seria de 5.00 R$ e seu 
teria um decrescimo de 50 centavos a cada aumento  de 26% na venda de ingresos.*/

//Algoritmo.12
#include<stdio.h>
#include<conio.h>
main()
{
      float lucro,preco,i,dinheiro;
      int ingressos=120;
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
      for(i=5.50-0.50;i>=1.00;i--)
      {
                             dinheiro=ingressos*i;
                             lucro=dinheiro-200;
                             preco=i;
                             printf("\n vendendo %d de ingressos.",ingressos);
                             printf("\n Preco de %0.2f R$ por ingresso.",preco);
                             printf("\n O Lucro Sera De: %0.2f R$\n",lucro);
                             ingressos=ingressos+(ingressos*31.2/100);
      }
      getch();
}
