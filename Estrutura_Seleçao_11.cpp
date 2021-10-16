/* 11. Faça um programa que apresete o menu de opçoes a seguir,permita ao usuario escolher
a opçao desejada,receba os dados necessarios para executar a operaçao e mostre o resultado.
Verifique a possibilidade de opçao invalida e nao se preocupe com restriçoes como salario negativo:
          Menu de opções:
               1.Imposto
               2.Novo Salario
               3.Classificaçao */
               
//Algoritmo 11.               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Inicio
main()
{
      //Declare sal,real;
      float sal;
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
      //Declare op,inteiro;
      int op;
      //Escreva "Digite seu salario.";
      printf ("\n Digite seu salario.\n R$ ");
      //Leia sal;
      scanf ("%f",&sal);
      //Escreva "Digite uma opcao.";
      printf ("\n Digite uma opcao.");
      printf("\n  _____________________________________ ");
      printf("\n |1-imposto |2-novo salario |3-posicao |");
      printf("\n  _____________________________________ \n ");
      //Leia op;
      scanf("%d",&op);
      if(op==1)
      {
               if(sal>500)
               {
                          sal=(sal*5/100);
                          printf ("\n O percentual de imposto e:\n %0.2f R$.\n",sal);
                          }
                          else if(500<sal<850)
                          {
                               sal=(sal*10/100);
                               printf ("\n O percentual de imposto e:\n %0.2f R$.\n",sal);
                               }
                               else if(sal>850)
                               {
                                    sal=(sal*15/100);
                                    printf ("\n O percentual de imposto e:\n %0.2f R$.\n",sal);
                                    }
     }
     else if(op==2)
     {
          if(sal>1500)
          {
                       sal=sal+25;
                       printf ("\n O novo salario e:\n %0.2f R$.\n",sal);
                       }
                       else if(750<=sal<=1500)
                       {
                            sal=sal+50;
                            printf ("\n O novo salario e:\n %0.2f R$.\n",sal);
                            }
                            else if(450<=sal<750)
                            {
                                 sal=sal+75;
                                 printf ("\n O novo salario e:\n %0.2f R$.\n",sal);
                                 }
                                 else if(sal<450)
                                 {
                                      sal=sal+100;
                                      printf ("\n Seu novo salario e:\n %0.2f R$.\n",sal);
                                      }
     }
     else if(op==3)
     {
          if(sal<=700)
          {
                       printf ("\n Voce e um funcionario mal renumerado.\n");
                       }
                       else if(sal>700)
                       {
                            printf ("\n Voce e um funcionario bem renumerado.\n");
                            }
     }
     else 
     printf("\n Opcao invalida.\n");
     printf("\n\n");
     system("pause");
}
