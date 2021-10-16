/* 13. Faça um programa que receba a altura e o peso de uma persso.De acordo com a tabela,verifique e mostre qual a classificaçao
dessa pessoa.*/
            
//Algoritmo.13               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Inicio
main()
{
      //Declare alt,peso,real;
      float alt,peso;
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
      printf ("\n Digite sua altura e peso.\n R$ ");
      printf("\n  _______________ ");
      printf("\n | Altura | Peso |");
      printf("\n  _______________ \n ");
      //Leia alt,peso;
      scanf ("%f%f",&alt,&peso);
      if((alt<120)&&(peso<=60))
      {
                             printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                             printf("\n  __________ ");
                             printf("\n | Classe A |");
                             printf("\n  __________ \n ");
                             }
                             else if((120<alt<=170)&&(peso<=60))
                             {
                                  printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                  printf("\n  __________ ");
                                  printf("\n | Classe B |");
                                  printf("\n  __________ \n ");
                                  }
                                  else if((alt>170)&&(peso<=60))
                                  {
                                       printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                       printf("\n  __________ ");
                                       printf("\n | Classe C |");
                                       printf("\n  __________ \n ");
                                       }
                                       else if((alt<=120)&&(60<peso<=90))
                                       {
                                            printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                            printf("\n  __________ ");
                                            printf("\n | Classe D |");
                                            printf("\n  __________ \n ");
                                            }
                                            else if((120<alt<=170)&&(60<peso<=90))
                                            {
                                                 printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                                 printf("\n  __________ ");
                                                 printf("\n | Classe E |");
                                                 printf("\n  __________ \n ");
                                                 }
                                                 else if((alt>170)&&(60<peso<=90))
                                                 {
                                                      printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                                      printf("\n  __________ ");
                                                      printf("\n | Classe F |");
                                                      printf("\n  __________ \n ");
                                                      }
                                                      else if((alt<=120)&&(peso>90))
                                                      {
                                                           printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                                           printf("\n  __________ ");
                                                           printf("\n | Classe G |");
                                                           printf("\n  __________ \n ");
                                                           }
                                                           else if((120<alt<=170)&&(peso>90))
                                                           {
                                                                printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                                                printf("\n  __________ ");
                                                                printf("\n | Classe H |");
                                                                printf("\n  __________ \n ");
                                                                }
                                                                else if((alt>170)&&(peso>90))
                                                                {
                                                                     printf ("\n A sua altura e %0.0f cm seu peso %0.2f kg.\n \n Tipo:",alt,peso);
                                                                     printf("\n  __________ ");
                                                                     printf("\n | Classe I |");
                                                                     printf("\n  __________ \n ");
                                                                     }
                                                                     else
                                                                     printf("\n Opcao invalida.\n");
                                                                     printf("\n\n");
                                                                     system("pause");
                                                                     }
