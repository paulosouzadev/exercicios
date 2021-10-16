/* 3.Exiba os nuemros impares que estao entre dois numeros digitados pelo usuario.*/

//Algoritmo.Extra.03
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{     
      int t_i,t_f,i;
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
      printf("\n Digite o valor inicial.\n ");
      scanf("%d",&t_i);
      printf("\n Digite o valor final.\n ");
      scanf("%d",&t_f);
      system("cls");
      printf("\n Os Numeros Impares Entre %d E %d Sao:",t_i,t_f);
      for (i=t_i;i<=t_f;i++)
      {
          if((i%2)!=0)
          printf("\n O Numero %d E Impar.",i);
          }
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
}

