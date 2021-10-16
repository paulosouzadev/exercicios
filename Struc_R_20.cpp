/* 04.Faça um programa que ao receber um numero mostre em seguida sua tabuada!!!*/

//Algoritmo.Extra.04
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i=1,j=1,x,cont=0;
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
      printf("\n Visualizacao todas Tabuadas de 1 a 10:");
      printf("\n Pressione \"Enter\" para continuar...");
      getchar();
      system("cls");
      printf("\n AS TABAUADAS SAO.\n");
      
      for(i=1;i<=10;i++)
      {
                        cont=cont+1;
                        printf("\n");
                        printf(" Tabuada do %d\n",cont);
          for (j=1;j<=10;j++)
          {
                            
              x=i*j;
              printf(" %2d x %2d = %2d\n",j,i,x,(i*cont));
          }
      }
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
}

/*
#include <stdio.h>
#include <stdlib.h>
main()
{
      int cont,i;
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
      printf ("\n Imprime a tabuada do 1 ate o 10\n");
      cont = 0;
           do{
            cont =cont +1;
            printf ("\n");
            printf (" Tabuadodo %d\n\n",cont);
            for (i=1;i<=10;i++)
            {
                printf (" %2d  X  %2d = %2d\n",i,cont,(i*cont));
            }
              }
              while (cont<10);                
              system("pause");
              return(0);
}*/
