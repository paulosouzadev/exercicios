/* 5.Faça um algoritmo que leia um numero n e que indique quantos valores interios devem ser lidos a seguir.Para cada numero lido,
mostre uma tabela contendo o valor lido e o fatorial desse valor.*/

//Algoritmo.5
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int n,fat=1,i;    
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
      printf("\n Entre com numero para fatoracao.\n ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       fat=fat*i;
      }    
      printf("\n O Fatorial de %d! e %d.\n",n,fat);
      printf("\n\n");
      system("pause");
}

/* obs. A seguinte resoluçao seria uma segunda forma resoluçao do Algoritmo ultizando se de um for de decremento ao contraio da
primeira opçao onde usamos um for de incremento:
        #include<stdio.h>
        #include<conio.h>
        main()
        {
              int n,fat,i;    
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
              printf("\n Entre com numero desejado.\n ");
              scanf("%d",&n);
              fat=n;
              for(i=n-1;i>=1;i--)
              {
                                 fat=fat*i;
              }
              printf("\n O Fatorial de %d! e %d.\n",n,fat);
              getch();
        }*/
