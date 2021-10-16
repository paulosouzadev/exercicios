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
int main (){
     float sal;
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
     printf("\n Digite o salario:\n R$ ");
     scanf("%f",&sal);
     printf ("\n Digite uma opcao.");
     printf("\n  _____________________________________ ");
     printf("\n |1-imposto |2-novo salario |3-posicao |");
     printf("\n  _____________________________________ \n ");
     //Leia op;
     scanf("%d",&op);
     switch (op)
     {
                 case 1:if(sal>500){
                      sal=((sal*5/100));
                      printf ("\n O percentual de imposto e:\n %0.2f R$.",sal);
                      break;
                      }
                      else if(500<sal<850){
                           sal=((sal*10/100));
                           printf ("\n O percentual de imposto e:\n %0.2f R$.",sal);
                           break;
                           }
                           else if(sal>850){
                                sal=((sal*15/100));
                                printf ("\n O percentual de imposto e:\n %0.2f R$.",sal);
                                break;
                                }
                 case 2:if(sal>1500){
                      sal=sal+25;
                      printf ("\n O novo salario e:\n %0.2f R$.",sal);
                      break;
                      }
                      else if(450<=sal<750){
                           sal=sal+75;
                           printf ("\n O novo salario e:\n %0.2f R$.",sal);
                           break;
                           }
                           else if(sal<450){
                                sal=sal+100;
                                printf ("\n Seu novo salario e:\n %0.2f R$.",sal);
                                break;
                                }
                 case 3:if(sal<=700){
                      printf ("\n Voce e um funcionario mal renumerado.");
                      break;
                      }
                      else if(sal>700){
                           printf ("\n Voce e um funcionario bem renumerado.");
                           break;
                           }
                           default:printf ("\n Opcao invalida!!!");
     }           
     printf("\n\n");
     system("pause");
}
