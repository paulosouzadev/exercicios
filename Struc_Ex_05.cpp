/* 5.Leia 5 numeros e exiba quantos sao pares ou impares cuidado com as mensgens envolvidas.*/

//Algoritmo.Extra.5
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{     
      int x; 
      x=0; 
      while(x<256) 
      {
          x++; 
      }
      int n,i,nl=1,par=0,imp=0,r;
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
      printf("\n Por Favor Insira Quantos Numeros Deseja Fazer A Verifica\%c\ao.\n ",x);
      scanf("%d",&r);
      for (i=1;i<=r;i++)
      {
          printf("\n %do Numero=",nl);
          scanf("%d",&n);
          nl++;
          if((n%2)==0)
          par++;
          if((n%2)!=0)
          imp++;
          }
          system("cls");
          printf("\n A Quantidade De Numeroes Pares E Impares E A Seguinte:");
          printf("\n %d Numeros Par. ",par);
          printf("\n %d Numero Impar.",imp);
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
}

