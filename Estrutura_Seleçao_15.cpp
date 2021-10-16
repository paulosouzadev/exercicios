/* 15. Faça um programa que receba:
       a)O codigo do estado origen da carga de um caminhao supondo que o codigo do estado seja,um numero inteiro entre 1 a 5.
       b)O peso da carga do caminhao em tonelada.
       c)O codigo da carga supondo que seja um numero inteiro entre 10 e 40.
       d)O peso do caminhao deve ser convertido em quilos.
       e)O preço da carga do caminhao.
       f)O valor do imposto,sabendo-se que imposto é cobrado sobre o preço da carga do caminhao e que depende do estado origem.
       g)O valor total transportado pelo caminhao,carga mais imposto.*/ 

//Algoritmo.15               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{    float peso_t,peso_k,preco;
     int cod,cod_est;
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
     printf ("\n Digite o codigo do Pais.\n");
     printf (" *-----------------------------*\n");
	 printf (" | Codigo do Estado | Imposto  |\n");
	 printf (" *-----------------------------*\n");
	 printf (" |  1 - 35/100                 |\n");
	 printf (" |  2 - 25/100                 |\n");
	 printf (" |  3 - 15/100                 |\n");
	 printf (" |  4 - 5/100                  |\n");
	 printf (" |  5 - isento                 |\n");
	 printf (" *-----------------------------*\n ");
	 scanf("%d",&cod_est);
	 system("cls");
     printf ("\n Digite o codigo da carga.\n");
     printf (" *-----------------------------*\n");
	 printf (" |Codigo da Carga |Preco por kg|\n");
	 printf (" *-----------------------------*\n");
	 printf (" |  10 a 20 - 100 R$.          |\n");
	 printf (" |  21 a 30 - 250 R$.          |\n");
	 printf (" |  31 a 30 - 340 R$.          |\n");
	 printf (" *-----------------------------*\n ");
     scanf("%d",&cod);
     system("cls");
     printf ("\n Entre com peso do Caminhao.\n Kg ");
     scanf("%f",&peso_t);
     peso_k=((peso_t*1000));
     if((cod>=10)&&(cod<=20))
     {
                preco=(peso_k*100);
                printf("\n O peso do produto adquirido e:\n %0.2f g.\n",peso_k);
                }
                else if((cod>=21)&&(cod<=30))
                {
                     preco=(peso_k*250);
                     printf("\n O peso do produto adquirido e:\n %0.2f g.\n",peso_k);
                     }
                     else if((cod>=31)&&(cod<=40))
                     {
                          preco=(peso_k*340);
                          printf("\n O peso do produto adquirido e:\n %0.2f g.\n",peso_k);
                          }
                          if(cod_est=1)
                          printf("\n O valor todal transportado,mais imposto e:\n %0.2f R$.\n",preco=(preco+(preco*35/100)));
                          else if(cod_est=2)
                          printf("\n O valor todal transportado,mais imposto e:\n %0.2f R$.\n",preco=(preco+(preco*25/100)));
                          else if(cod_est=3)
                          printf("\n O valor todal transportado,mais imposto e:\n %0.2f R$.\n",preco=(preco+(preco*15/100)));
                          else if(cod_est=4)
                          printf("\n O valor todal transportado,mais imposto e:\n %0.2f R$.\n",preco=(preco+(preco*5/100)));
                          else if(cod_est=5)
                          printf("\n O valor todal transportado,mais imposto e:\n %0.2f R$.\n",preco);
                          printf("\n\n");
                          system("pause");
                          }
     
