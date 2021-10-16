/* 9.Faça um programa que leia 10 conjuntos de dois valores,o principio reprecentando numero do aluno e segundo sua altura em cm.
Encontre o aluno mais alto e o mais baixo.Mostre seu numero sua altura.*/

//Algoritmo.9
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,num,alt,alun_al,alun_bx,maior=0,menor=1000000,nl=1;  
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
      for(i=1;i<=3;i++)
      {
          printf("\n Digite Os Dados Dos %do Alunos.",nl);
	      printf("\n Altura:?\b");
          scanf("%d",&alt);
          printf(" numero:?\b");
          scanf("%d",&num);
	      nl++;
	      if(alt>maior)
	      {
                       maior=alt;
	                   alun_al=num;
                       }
                       else if(alt<menor)
	                   {
                            menor=alt;
                            alun_bx=num;
                            }
      }
      printf("\n A Maior E Menor Altura Digitados Foram:\n");
	  printf(" -%d E O Maior Altura E Seu Numero E %d.\n",maior,alun_al);
      printf(" -%d E O Menor Altura E Seu Numero E %d.\n",menor,alun_bx);
      printf("\n\n");
      system("pause");
}
