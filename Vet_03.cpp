/*3.Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa.Escreva ao final o vetor obtido.*/

//Algoritmo.03
#include<stdio.h>
#include<conio.h>
main()
{
      int vet[16],i,vet2[16],aux;      
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
      printf(" *             Estrutura De Vetores e Strings             *\n");
      printf(" *========================================================*\n");
      for(i=0;i<16;i++)
      {
                       printf("\n Digite os valores do vetor: ");
                       scanf("%d",&vet[i]);
      }
      for(i=0;i<8;i++)
      {
                      aux=vet[i];
                      vet[i]=vet[15-i];
                      vet[15-i]=aux;
      }
      for(i=0;i<16;i++)
      {
                       printf("\n%d",vet[i]);
      }
      getch();
}
