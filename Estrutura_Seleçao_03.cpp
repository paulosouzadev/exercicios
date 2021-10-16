/* 3. Faça um programa que leia 3 numeros e mostre o maior.*/

//Algoritmo 3.
#include<stdio.h>
#include<conio.h>
//Inicio
main()
{
      int n1,n2,n3;
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
      printf(" *             Estrutura De Selecao if else               *\n");
      printf(" *========================================================*\n");
      printf("\n Digite os tres numeroes desejado.\n ");
      scanf("%d%d%d",&n1,&n2,&n3);
      if((n1>n2)&&(n1>n3))
      printf("\n O maior numero digitado e %d .",n1);
      else if((n2>n1)&&(n2>n3))
      printf("\n O maior numero digitado e %d .",n2);
      else if((n3>n1)&&(n3>n2))
      printf("\n O maior numero digitado e %d .",n3);
      else
      printf("\n Os numeros sao iguais!!!");
      getch();
}
