/* 5. Faça um programa que receba dois numeros e execute uma das operaçoes listadas a seguir de acordo com a escolha do usuario.
Se for digitada uma opçao invalida mostre uma mensagem de erro e termine a execuçao do programa.As opçoes sao:
       1.Media entre dois numeros.
       2.Diferença entre dois numeros.
       3.Produto entre dois numeros.*/

//Algoritmo.5
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Inicio
main()
{
      float num_1,num_2,axu;
      int op;
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
      printf("\n Por favor digite primeiro numero. ");
      printf("\n  _________ ");
      printf("\n |1-Numero |");
      printf("\n  _________ \n ");
      scanf("%f",&num_1);
      printf("\n Por favor digite segundo numero. ");     
      printf("\n  _________ ");
      printf("\n |2-Numero |");
      printf("\n  _________ \n ");     
      scanf("%f",&num_2);
      printf("\n Digite opcao desejada.\n ");
      printf("\n  ________________________________ ");
      printf("\n |1-Media |2-Diferenca |3-Produto |");
      printf("\n  ________________________________ \n ");
      scanf("%d",&op);
      if(op==1)
      printf("\n A Media e %0.2f \n",axu=((num_1+num_2)/2));
      else if(op==2)
      printf("\n A Diferença e %0.2f \n",axu=(num_1-num_2));
      else if(op==3)
      printf("\n O Produto e %0.2f \n",axu=(num_1+num_2));
      else
      printf("\n A opcao digitada e invalida!!!");
      printf("\n\n");
      system("pause");
}
                  
