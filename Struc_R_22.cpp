/* 22.Faça um programa que receba 2 notas de 6 alunos e calcule sua media aritmetica.Mostre sua media o total de aprovados,
reprovados e exame.*/

//Algoritmo.22
#include<stdio.h>
#include<conio.h>
main()
{
      int i,re=0,ex=0,ap=0;
      float n1,n2,media;
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
      for (i=1;i<=6;i++)
      {
          printf("\n Digite As Notas Desejada.");
          printf("\n 1a Nota:?\b");
          scanf("%f",&n1);
          printf(" 2a Nota:?\b");
          scanf("%f",&n2);
	      media=(n1+n2)/2;
          if((media<=30))
          {
                         printf("\n Sua Media:%0.2f \n",media);
                         printf(" Reprovado.\n");
                         re++;
                         }
                         else if((media>30)&&(media<=70))
                         {
                              printf("\n Sua Media:%0.2f \n",media);
                              printf(" Exame.\n");
                              ex++;
                              }
                              else 
                              {
                                   printf("\n Sua Media:%0.2f \n",media);
                                   printf(" Aprovado.\n");
                                   ap++;
                                   }
      }
      printf("\n O Total De %d Alunos Aprovados. ",ap);
      printf("\n O Total De %d Alunos Exame. ",ex);
      printf("\n O Total De %d Alunos Reprovados. ",re);
      getch();
}

