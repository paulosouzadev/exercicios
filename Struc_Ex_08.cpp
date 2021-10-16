/* 8.Dado 5 numero inteiro,exiba o menor e maior numeros digitados.*/

//Algoritmo.Extra.8
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,id,maior=0,menor=1000000,nl=1;  
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
      for (i=1;i<=5;i++)
      {
          printf("\n Digite %do Numero Desejado: ",nl);
	      scanf("%d",&id);
	      nl++;
	      if(id>maior)
	      maior=id;
          if(id<menor)
	      menor=id;
      }
      printf("\n O Maior E Menor Numero Digitados Foram:\n");
	  printf(" -%d E O Maior Numero Digitado.\n",maior);
      printf(" -%d E O Menor Numero Digitado.\n",menor);
      printf("\n\n");
      system("pause");
}
