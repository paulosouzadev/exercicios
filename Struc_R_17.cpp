/* 17.Faça um programa que monte os 10 primeiros termos da sequencia de Fibonaci.*/

//Algoritmo.17
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,f,s,fa,r;
      i=f=s=0;
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
      printf ("\n Digite o numero de termos: ?\b");
      scanf("%i",&i);
      printf ("\n Digite o numero da serie de Fibonacci: ?\b");
      scanf("%i",&f);
      printf(" [0-%i-",f);
      for(r=0;r<(i-1);r++)
      {
                          fa=f;              
                          f=f+s;
                          printf ("%i-",f);
                          s=fa;
      }
      printf ("\b...]");
      printf ("\n\n");
      system("pause");    
}
