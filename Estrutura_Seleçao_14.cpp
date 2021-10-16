/* 14. Faça um programa que receba:
       a)O codigo de um produto comprado,supondo que a digitaçao do codigo do produto seja um numero inteiro de 1 a 10.
       b)O peso do produto em quilos.
       c)O codigo do pais de origem supondo que a digitaçao do codigo do pais seja um numero interio entre 1 a 3.
       d)O peso do produto convertido em gramas.
       e)O preço total do produto comprado.
       f)O valor do imposto,sabendo-se que imposto é cobrado sobre o preço total do produto comprado e que depende do pais origem.
       g)O valor total,preço total do produto mais imposto.*/ 

//Algoritmo.14               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{    float peso_k,peso_g,preco;
     int cod,cod_pais;
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
     printf ("\n Digite o codigo do Pais.");
     printf("\n  ____________________________________ ");
     printf("\n | Cogigo Do Pais    | Imposto        |");
     printf("\n  ____________________________________ ");
     printf("\n |         1         |       0/100    |");
     printf("\n  ____________________________________ ");
     printf("\n |         2         |      15/100    |");
     printf("\n  ____________________________________ ");
     printf("\n |         3         |      25/100    |");
     printf("\n  ____________________________________ \n ");
     //Leia cod_pais;
     scanf("%d",&cod_pais);
     printf ("\n Digite o codigo do Produto.");
     printf("\n  ____________________________________ ");
     printf("\n | Cogigo Do Produto |Preco Por Grama |");
     printf("\n  ____________________________________ ");
     printf("\n |      1  a  4      |       10       |");
     printf("\n  ____________________________________ ");
     printf("\n |      5  a  7      |       25       |");
     printf("\n  ____________________________________ ");
     printf("\n |      8  a  10     |       35       |");
     printf("\n  ____________________________________ \n ");
     //Leia cod;
     scanf("%d",&cod);
     printf ("\n Entre com peso do produto.\n\n Kg ");
     //Leia peso_k;
     scanf("%f",&peso_k);
     peso_g=((peso_k*1000));
     if((cod>=1)&&(cod<=4))
     {
                preco=(peso_g*10);
                printf("\n O peso do produto adquirido e:\n %0.2f g.\n",peso_g);
                }
                else if((cod>=5)&&(cod<=7))
                {
                     preco=(peso_g*25);
                     printf("\n O peso do produto adquirido e:\n %0.2f g.\n",peso_g);
                     }
                     else if((cod>=8)&&(cod<=10))
                     {
                          preco=(peso_g*35);
                          printf("\n O peso do produto adquirido e:\n %0.2f g.\n",peso_g);
                          }
                          if(cod_pais=1)
                          printf("\n O preco do produto adquirido mais imposto e:\n %0.2f R$.\n",preco);
                          else if(cod_pais=2)
                          {
                               preco=(preco+(preco*15/100));
                               printf("\n O preco do produto adquirido mais imposto e:\n %0.2f R$.\n",preco);
                               }
                               else if(cod_pais=3)
                               {
                                    preco=(preco+(preco*25/100));
                                    printf("\n O preco do produto adquirido mais imposto e:\n %0.2f R$.\n",preco);
                                    }
                                    printf("\n\n");
                                    system("pause");
                                    }
     
