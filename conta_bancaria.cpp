#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
struct cadastro{
       char nome[20],n_conta[20];
       float saldo;
       }bancario[15];
             
             int i,op;
            
             for(i=0;i<=14;i++)
             {
                               printf("\n Digite o nome do cliente.\n");
                               gets(bancario[i].nome);
                               printf("\n Digite o numero da conta.\n");
                               scanf("%d",&bancario[i].saldo);
                               fflush(stdin);
                               printf("\n Digite o saldo.\n");
                               scanf("%0.2f",&bancario[i].saldo);
                               fflush(stdin);
             }
             for(i=0;i<=14;i++)
             {
                               printf("\n Digite uma opcao.\n");
                               scanf("%d",&op);
                               switch(op)
                               {
                               case 1:if((bancario[i].n_conta!=bancario[i].n_conta))
                                    printf("\n %s %s \n Cadastro confirmado!",bancario[i].n_conta,bancario[i].nome);
                                    else if ((bancario[i].n_conta ==bancario[i].n_conta))
                                    printf("\n Cadastro invalido.\n");
                                    printf("\n Digite outro numero.\n");
                                    scanf("%d",&bancario[i].n_conta);
                                    fflush(stdin);
                                    break;
                               
                               case 2:if((bancario[i].saldo >= bancario[i].saldo))
                                    printf("\n %s %s %0.2f.\n",bancario[i].n_conta,bancario[i].nome,bancario[i].saldo);
                                    break;
                               
                               case 3:if((bancario[i].n_conta==bancario[i].nome))
                                    printf("\n %0.2f",bancario[i].saldo);
                                    break;
                               
                               default:printf("\n Opcao invalida.\n");
                               break;
                               }
             }
             getch();
}

                               
