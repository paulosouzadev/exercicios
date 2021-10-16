/* 1°.Projeto elaborado em cima do programa de parcelamento de produto - Patrick,modificado para estrutura de seleçao switch-case
onde incluimos opçao de pagamento avista com descontos de acordo com desejado pelo proprietario do programa.*/
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
          float produto,vt;
          int parcela,op;
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
          printf("\n Por Favor Selecione o Modo de Pagamento.\n");
          printf("\n  ______________________ ");
          printf("\n |1-Avista |2-Parcelado |");
          printf("\n  ______________________ \n ");
          scanf ("%d",&op);
          switch(op){
                     case 1:
                          printf ("\n Calculo Para Pagamentos Avista:\n");
                          printf ("\n Digite o Valor do Produto:\n R$ ");
                          scanf ("%f",&produto);
                          printf ("\n O Valor do Produto Avista sera:\n %0.2f R$.",vt=(produto-(produto*10/100)));
                          break;
                     case 2:
                          printf ("\n Calculo Para Pagamentos A Prazo:\n");
                          printf ("\n Digite o Valor do Produto:\n R$ ");
                          scanf ("%f",&produto);
                          printf ("\n Digite o numero de parcelas:\n ");
                          scanf ("%d",&parcela);
                          if(parcela==2){
                                         vt=((produto+2.60)/2);
                                         printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt); 
                                         break;
                                         }
                                         else if(parcela==3){
                                              vt=((produto+5.00)/3);
                                              printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt); 
                                              break;
                                              }
                                              else if(parcela==4){
                                                   vt=((produto+7.60)/4);
                                                   printf ("\n O valor de cada parcela sera:\n %0.2f\n R$.",vt);
                                                   break;
                                                   }
                                                   else if(parcela==5){
                                                        vt=((produto+10.00)/5);
                                                        printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt);
                                                        break;
                                                        }
                                                        else if(parcela==6){
                                                             vt=((produto+12.80)/6);
                                                             printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt);
                                                             break;
                                                             }
                                                             else if(parcela==7){
                                                                  vt=((produto+15.50)/7);
                                                                  printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt);
                                                                  break;
                                                                  }
                                                                  else if(parcela==8){
                                                                       vt=((produto+18.4)/8);
                                                                       printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt);
                                                                       break;
                                                                       }
                                                                       else if(parcela==9){
                                                                            vt=((produto+20.60)/9);
                                                                            printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt);
                                                                            break;
                                                                            }
                                                                            else if(parcela==10){
                                                                                 vt=((produto+24.00)/10);
                                                                                 printf ("\n O valor de cada parcela sera:\n %0.2f R$.\n",vt);
                                                                                 break;
                                                                                 }
                                                                                 default:printf("\n Opcao invalida!!!");
                     }
          printf("\n");
          getchar();printf("\n Pressione \"Enter\" para continuar...");
          getchar();
}   
