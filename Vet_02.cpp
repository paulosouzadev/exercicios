/*2.Declare vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.*/

#include<stdio.h>
#include<conio.h>
main()
{
      int vet[10],i,j,acm=0,axu;
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
      for(i=0;i<10;i++)
      {
                         printf("\n Digite Valores Do Vetor: ?\b");
                         scanf("%d",&axu);
                         if((i%2)!=0);
                         {
                                      vet[i]=i;
                                      printf(" -%d ",vet[i]);
                                      acm++;
                                      }
      }
      printf("\n Os 10 primeiros numeros impares sao:");
     /* printf("[");
      for(j=0;j<10;j++)
      {
                       printf(" -%d ",vet[j]);
      }
      printf("]");*/
      getch();
}
