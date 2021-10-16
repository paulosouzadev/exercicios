/*6.Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.*/

#include<stdio.h>
#include<conio.h>
main()
{
      int vet[10],c=1,maior,i,j;
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
      //Inicializo o for de 1 ate 10 andando de 1 em 1...
      for(i=0;i<10;i++)
      {
                        //Peço ao usuario os valores do vetor 
                        printf("\n Digite %do do Vetor: ?\b",c);
                        //Faço a leitura de todos os dados e armanzeno em seus endereço "&".
                        scanf("%d",&vet[i]);
                        c++;
      }
      for(i=0;i<10;i++)
      {
                       for(j=0;j<10;j++)
                       {
                                          if((vet[i]>vet[j]))
                                          {
                                                             maior=vet[i];
                                                             vet[i]=vet[j];
                                                             vet[j]=maior;
                                          }
                       }
      }
      for(i=0;i>10;i++)
      printf(" %d ",vet[i]);
      getch();
}
