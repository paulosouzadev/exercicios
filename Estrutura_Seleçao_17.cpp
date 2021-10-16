/* 17. Faça um programa que receba i valor do salario minimo,o turno de trabalho(matutino,vespertino ou noturno),a categoria
(operario ou gerente),eo numero de horas trabalhadas.Calcule e mostre:
          a)Valor do salario bruto.
          b)imposto cobrados.
          c)gratificaçao.
          d)O Salario liquido.
          e)Classifica,mal remunerado,medio ou bem remunerado.*/ 

//Algoritmo.17               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{    float sal_min,sal_bru,val_hrs;
     int fun,num_hrs;
     char op;
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
     printf("\n Digite O Salario Minimo Atual.\n R$.");
     scanf("%f",&sal_min);
     printf("\n Entre Com Numero De Horas Trabalhadas.\n ");
     scanf("%f",&num_hrs);
     system("cls");
     printf ("\n Entra Com Turno De Trabalho.\n");
     printf (" *-----------------------------*\n");
	 printf (" |      Turno De Trabalho      |\n");
	 printf (" *-----------------------------*\n");
	 printf (" |    M - Matutino             |\n");
	 printf (" |    V - Vespertino           |\n");
	 printf (" |    N - Noturno              |\n");
	 printf (" *-----------------------------*\n ");
	 scanf("%s",&op);
	 switch(op){
                case 'm':
                     printf ("\n Entre Com A Categoria.\n");
                     printf (" *-----------------------------*\n");
	                 printf (" |      Categoria Ocupada      |\n");
	                 printf (" *-----------------------------*\n");
	                 printf (" |    O - Operario             |\n");
	                 printf (" |    G - Gerente              |\n");
	                 printf (" *-----------------------------*\n ");
                     scanf("%d",&fun);
                     system("cls");
                     val_hrs=((sal_min*10/100));
                     sal_bru=((num_hrs*val_hrs));
                     if((fun=='o')||(fun=='O')&&(sal_bru<300)&&(num_hrs>80)){
                     sal_bru=(sal_bru-(sal_bru*3/100));
                     sal_bru=(sal_bru+30.00);
                     sal_bru=(sal_bru+(sal_bru/3));
                     break;
                     }
                     else if((fun=='o')||(fun=='O')&&(sal_bru<300)&&(num_hrs<=80)){
                          sal_bru=(sal_bru-(sal_bru*3/100));
                          sal_bru=(sal_bru+(sal_bru/3));
                          break;
                          }
                          else if((fun=='o')||(fun=='O')&&(sal_bru>=300)&&(num_hrs>80)){
                               sal_bru=(sal_bru-(sal_bru*5/100));
                               sal_bru=(sal_bru+30.00);
                               sal_bru=(sal_bru+(sal_bru/3));
                               break;
                               }
                               else if((fun=='o')||(fun=='O')&&(sal_bru>=300)&&(num_hrs<=80)){
                                    sal_bru=(sal_bru-(sal_bru*5/100));
                                    sal_bru=(sal_bru+(sal_bru/3));
                                    break;
                                    }
                                    if((fun=='g')||(fun=='G')&&(sal_bru>=400)&&(num_hrs>80)){
                                        sal_bru=(sal_bru-(sal_bru*6/100));
                                        sal_bru=(sal_bru+30.00);
                                        sal_bru=(sal_bru+(sal_bru/2));
                                        break;
                                        }
                                        else if((fun=='g')||(fun=='G')&&(sal_bru>=400)&&(num_hrs<=80)){
                                             sal_bru=(sal_bru-(sal_bru*6/100));
                                             sal_bru=(sal_bru+(sal_bru/2));
                                             break;
                                             }
                                             else if((fun=='g')||(fun=='G')&&(sal_bru<800)&&(num_hrs<=80)){
                                                  sal_bru=(sal_bru-(sal_bru*4/100));
                                                  sal_bru=(sal_bru+30.00);
                                                  sal_bru=(sal_bru+(sal_bru/2));
                                                  break;
                                                  }
                                                  else if((fun=='g')||(fun=='G')&&(sal_bru<800)&&(num_hrs<=80)){
                                                       sal_bru=(sal_bru-(sal_bru*4/100));
                                                       sal_bru=(sal_bru+(sal_bru/2));
                                                       break;
                                                       }
                                                       if((sal_bru<350)){
                                                           printf ("\n Voce e um funcionario mal renumerado.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                           break;
                                                           }
                                                           else if((sal_bru>=350)&&(sal_bru<=600)){
                                                                printf ("\n Voce e um funcionario com renumeracao media.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                                break;
                                                                }
                                                                else if((sal_bru>600)){
                                                                     printf ("\n Voce e um funcionario com renumeracao media.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                                     break;
                                                                     }
                case 'v':
                     printf ("\n Entre Com A Categoria.\n");
                     printf (" *-----------------------------*\n");
	                 printf (" |      Categoria Ocupada      |\n");
	                 printf (" *-----------------------------*\n");
	                 printf (" |    O - Operario             |\n");
	                 printf (" |    G - Gerente              |\n");
	                 printf (" *-----------------------------*\n ");
                     scanf("%d",&fun);
                     system("cls");
                     val_hrs=((sal_min*12/100));
                     sal_bru=((num_hrs*val_hrs));
                     if((fun=='o')||(fun=='O')&&(sal_bru<300)&&(num_hrs>80)){
                     sal_bru=(sal_bru-(sal_bru*3/100));
                     sal_bru=(sal_bru+30.00);
                     sal_bru=(sal_bru+(sal_bru/3));
                     break;
                     }
                     else if((fun=='o')||(fun=='O')&&(sal_bru<300)&&(num_hrs<=80)){
                          sal_bru=(sal_bru-(sal_bru*3/100));
                          sal_bru=(sal_bru+(sal_bru/3));
                          break;
                          }
                          else if((fun=='o')||(fun=='O')&&(sal_bru>=300)&&(num_hrs>80)){
                               sal_bru=(sal_bru-(sal_bru*5/100));
                               sal_bru=(sal_bru+30.00);
                               sal_bru=(sal_bru+(sal_bru/3));
                               break;
                               }
                               else if((fun=='o')||(fun=='O')&&(sal_bru>=300)&&(num_hrs<=80)){
                                    sal_bru=(sal_bru-(sal_bru*5/100));
                                    sal_bru=(sal_bru+(sal_bru/3));
                                    break;
                                    }
                                    if((fun=='g')||(fun=='G')&&(sal_bru>=400)&&(num_hrs>80)){
                                        sal_bru=(sal_bru-(sal_bru*6/100));
                                        sal_bru=(sal_bru+30.00);
                                        sal_bru=(sal_bru+(sal_bru/2));
                                        break;
                                        }
                                        else if((fun=='g')||(fun=='G')&&(sal_bru>=400)&&(num_hrs<=80)){
                                             sal_bru=(sal_bru-(sal_bru*6/100));
                                             sal_bru=(sal_bru+(sal_bru/2));
                                             break;
                                             }
                                             else if((fun=='g')||(fun=='G')&&(sal_bru<800)&&(num_hrs<=80)){
                                                  sal_bru=(sal_bru-(sal_bru*4/100));
                                                  sal_bru=(sal_bru+30.00);
                                                  sal_bru=(sal_bru+(sal_bru/2));
                                                  break;
                                                  }
                                                  else if((fun=='g')||(fun=='G')&&(sal_bru<800)&&(num_hrs<=80)){
                                                       sal_bru=(sal_bru-(sal_bru*4/100));
                                                       sal_bru=(sal_bru+(sal_bru/2));
                                                       break;
                                                       }
                                                       if((sal_bru<350)){
                                                           printf ("\n Voce e um funcionario mal renumerado.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                           break;
                                                           }
                                                           else if((sal_bru>=350)&&(sal_bru<=600)){
                                                                printf ("\n Voce e um funcionario com renumeracao media.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                                break;
                                                                }
                                                                else if((sal_bru>600)){
                                                                     printf ("\n Voce e um funcionario com renumeracao media.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                                     break;
                                                                     }
                case 'n':
                     printf ("\n Entre Com A Categoria.\n");
                     printf (" *-----------------------------*\n");
	                 printf (" |      Categoria Ocupada      |\n");
	                 printf (" *-----------------------------*\n");
	                 printf (" |    O - Operario             |\n");
	                 printf (" |    G - Gerente              |\n");
	                 printf (" *-----------------------------*\n ");
                     scanf("%d",&fun);
                     system("cls");
                     val_hrs=((sal_min*12/100));
                     sal_bru=((num_hrs*val_hrs));
                     if((fun=='o')||(fun=='O')&&(sal_bru<300)&&(num_hrs>80)){
                     sal_bru=(sal_bru-(sal_bru*3/100));
                     sal_bru=(sal_bru+50.00);
                     sal_bru=(sal_bru+(sal_bru/3));
                     break;
                     }
                     else if((fun=='o')||(fun=='O')&&(sal_bru<300)&&(num_hrs<=80)){
                          sal_bru=(sal_bru-(sal_bru*3/100));
                          sal_bru=(sal_bru+(sal_bru/3));
                          break;
                          }
                          else if((fun=='o')||(fun=='O')&&(sal_bru>=300)&&(num_hrs>80)){
                               sal_bru=(sal_bru-(sal_bru*5/100));
                               sal_bru=(sal_bru+50.00);
                               sal_bru=(sal_bru+(sal_bru/3));
                               break;
                               }
                               else if((fun=='o')||(fun=='O')&&(sal_bru>=300)&&(num_hrs<=80)){
                                    sal_bru=(sal_bru-(sal_bru*5/100));
                                    sal_bru=(sal_bru+(sal_bru/3));
                                    break;
                                    }
                                    if((fun=='g')||(fun=='G')&&(sal_bru>=400)&&(num_hrs>80)){
                                        sal_bru=(sal_bru-(sal_bru*6/100));
                                        sal_bru=(sal_bru+50.00);
                                        sal_bru=(sal_bru+(sal_bru/2));
                                        break;
                                        }
                                        else if((fun=='g')||(fun=='G')&&(sal_bru>=400)&&(num_hrs<=80)){
                                             sal_bru=(sal_bru-(sal_bru*6/100));
                                             sal_bru=(sal_bru+(sal_bru/2));
                                             break;
                                             }
                                             else if((fun=='g')||(fun=='G')&&(sal_bru<800)&&(num_hrs<=80)){
                                                  sal_bru=(sal_bru-(sal_bru*4/100));
                                                  sal_bru=(sal_bru+50.00);
                                                  sal_bru=(sal_bru+(sal_bru/2));
                                                  break;
                                                  }
                                                  else if((fun=='g')||(fun=='G')&&(sal_bru<800)&&(num_hrs<=80)){
                                                       sal_bru=(sal_bru-(sal_bru*4/100));
                                                       sal_bru=(sal_bru+(sal_bru/2));
                                                       break;
                                                       }
                                                       if((sal_bru<350)){
                                                           printf ("\n Voce e um funcionario mal renumerado.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                           break;
                                                           }
                                                           else if((sal_bru>=350)&&(sal_bru<=600)){
                                                                printf ("\n Voce e um funcionario com renumeracao media.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                                break;
                                                                }
                                                                else if((sal_bru>600)){
                                                                     printf ("\n Voce e um funcionario com renumeracao media.\n Seu Salario Atual e:\n %0.2f R$.",sal_bru);
                                                                     break;
                                                                     }
                default:printf ("\n Opcao invalida...");
                printf ("\n Pressione \"Enter\" para continuar...");
                }
                getch();
                }
