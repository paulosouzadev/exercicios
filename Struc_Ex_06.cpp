/* 6.Dado um numero inteiro,calcule o seu fatorial.*/

//Algoritmo.Extra.6
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,nul=0,pos=0,neg=0,nl=1,x;  
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
      for (i=1;i<=10;i++)
      {
          printf("\n Digite %do Numero Desejado: ",nl);
	      scanf("%d",&x);
	      nl++;
	      if(x>0)
	      pos++;
          if(x<0)
	      neg++;
	      if(x==0)
	      nul++;
      }
      printf("\n A Tabela Com Os Numeros Fornecido E A Seguinte:\n");
	  printf(" -%d Numero Digitado Sao Positivo.\n",pos);
      printf(" -%d Numero Digitado Sao Negativo.\n",neg);
      printf(" -%d Numero Digitado Sao Nulos.\n",nul);
      printf("\n\n");
      system("pause");
   }
