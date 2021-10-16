/*12.Leia 3 vetores de 9 posições e crie outro com o 1º terço do 1°,2° terço do 2° e o 3° terço do 3º.
Escrever o vetor resultante ao final.*/

#include<stdio.h>
#include<conio.h>
main()
{
      int vet1[9],vet2[9],vet3[9],vet[9],i,j;
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
      for(i=0;i<=8;i++)
      {
                       printf("\n Digite o numero de termos");
                       scanf("%d%d%d",&vet[i],&vet2[i],&vet3[i]);
      }
      for(j=0;j<=8;j++)
      {
                       if((vet[i])=(vet1[j]))
                       vet[i]=vet1[j];
                       if((vet[i])=(vet2[j]))
                       vet[i]=vet2[j];
                       if((vet[i])=(vet3[6]))
                       vet[i]=vet3[j];
                       printf("\n Vet igual %d :\n vet1[j]\n vet2[j]\n vet3[j]");
      }
      getch();
}
      
