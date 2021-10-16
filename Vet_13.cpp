/*13. Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.*/

#include<stdio.h>
#include<conio.h>
main()
{
      int vet_x[10],i,j;
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
      printf(" *                  Estrutura De Vetores                  *\n");
      printf(" *========================================================*\n");
      for(i=0;i<=9;i++)
      {
                       printf("\n Digite os valores: ?\b");
                       scanf("%d",&vet_x[i]);
      }
      
      for(j=0;j<=9;j++)
      {
            for(i=0;i<=9;i++)
            {
                             if((i!=j)&&(vet_x[i]==vet_x[j]))
                             printf("\n Valores iguais sao %d!",vet_x[i]);
            }
      }
      getch();
}                            
                     
      
