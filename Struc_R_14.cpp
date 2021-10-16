/* 14.Faça um programa que receba a idade de 10 pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual,
a 18 anos.
          Obs.Programa modificado para maior funcionalidade!!!*/ 

//Algoritmo.14               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,id,cont=0,cont1=0,nl=1;
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
      printf(" *            Estrutura De Repetiçao For While            *\n");
      printf(" *========================================================*\n");
      for (i=1;i<=5;i++)
      {      
              printf("\n Entre com a %da idade.\n ",nl);
              scanf("%d",&id);
              nl++;
              if(id>=18)
              cont++;
              else if(id<18)
              cont1++;
      }
      printf("\n Ha %d pessoas menor de idade,e %d com maioridade...\n",cont1,cont);
      getchar();printf(" Pressione \"Enter\" para continuar...\n");
	  getchar();
}
