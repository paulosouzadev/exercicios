/* 11.Dado um numero inteiro,todos seus divisores.*/

//Algoritmo.Extra.11
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      int i,x,c,fat=1,nd=0,q;
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
      printf("\n A Tabela Desejada Sera A Seguinte:\n");
      printf(" Numero \tQuadrado \tCubo \tFatorial \tDivisores");
      for(i=1;i<=5;i++)
      {
                       q=pow(i,2);
                       c=pow(i,3);
                       fat=fat*i;
                       
                       for(x=1;x<=i;x++)
                       {
                                        if(i%x==0)
                                        nd++;
                                        }
      printf("\n %i\t\t%i\t\t%i\t%i\t\t%i",i,q,c,fat,nd);
      }
      getch();
}
