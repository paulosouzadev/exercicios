/* 2.Exiba os nuemros pares que estao entre dois numeros digitados pelo usuario.*/

//Algoritmo.Extra.02
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{     
      int t_i,t_f,i,j;
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
      printf("\n Os Numeros Par Entre %d E %d Sao:\n",t_i,t_f);
      for (i=t_i;i<=t_f;i++)
      {
          if((i%2)==0)
          printf("\n O Numero %d E Par. ",i);
          }
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
}

/* Na resoluçao dos exercicios 2 e 3 ha outra maneira de resolvelo,execuntando as duas requesiçoes ao mesmo tempo,
fazendo a verificaçao dos numeros pares e impares em uma mesmo programa como na forma a seguir...

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
      printf("\n Os Numeros Par Entre %d E %d Sao. ",t_i,t_f);
      for (i=t_i;i<=t_f;i++)
      {
          if((i%2)==0)
          printf("\n Os Numeros %d E Par. ",i);
          }
          printf("\n\n");
          printf("\n Os Numeros Impares Entre %d E %d Sao. ",t_i,t_f);
          for (i=t_i;i<=t_f;i++)
          {
              if((i%2)!=0)
              printf("\n O Numero %d E Impar.",i);
              }
              getch();
}*/
