#include <conio.h>
#include <string.h>
#include <stdio.h>

main()

{ 
struct cadastro
      { int num;
        char nome[35];
        float saldo;
      } conta[15]; 
    
   int i,op,posi,flag,num_conta;
   float saldo_cliente,menor_saldo;
   char nome_cliente[35];
   
   // inicializar o vetor de registros
   for (i=0;i<=14;i++)
     { conta[i].num = 0;
       strcpy(conta[i].nome,"\0");
       conta[i].saldo = 0;
     }
   
   // inicializar OP
       printf ("\n  Menu: \n");
       printf ("\n  \n --> 1 - Cadastrar contas\n");
       printf ("\n --> 2 - Visualizar contas de um determinado cliente\n");
       printf ("\n --> 3 - Excluir conta de menor saldo\n ");
       printf ("\n --> 4 - Sair");
       printf ("\n \n --> Digite opcao:\n ");
       scanf ("%d", &op);


   
   while (op!=4) 
   {     
         if ((op < 1) || (op > 4))
	     printf ("\n Opcao Invalida \n");
       
         if (op == 1)
	     { 
              flag = 0;
	          printf ("\n Digite o numero da conta:\n ");
	          scanf ("%d", &num_conta);
	       
	          for (i=0;i<15;i++)
	          {   if (num_conta == conta[i].num)
		          flag = 1;
	          }
	     
              if (flag == 1)
		      printf("\n Conta Existente.\n");
	          else
		      {   posi = -1;
		          i = 0;
		          
                  // para garantir que serão cadastradas apenas 15 contas 
		          
		          while (i < 15)
		          { 
                    if (conta[i].num == 0)
			        {  posi = i;
			           i = 15;
                     }
                  i++;
	              }
		          if (posi == -1)
		             printf("\n Impossivel cadastrar novas contas\n ");
                  else
		          { 
                      printf("\n Digite o nome do cliente:\n ");
                      fflush(stdin);
			          gets(nome_cliente);
			          printf("\n Digite o saldo do cliente:\n ");
			          scanf("%f", &saldo_cliente);
			          conta[posi].num = num_conta;
			          strcpy(conta[posi].nome,nome_cliente);
			          conta[posi].saldo = saldo_cliente;
			          printf("\n Conta cadastrada\n ");
                   }
              }
	          getch();
	      } // fim opção 1
	 
	 
       if (op == 2)
	   { 
              printf("\n Digite o nome do cliente a ser consultado\n ");
              fflush(stdin);
	          gets(nome_cliente);
	          flag = 0;
	    
              for (i=0;i<15;i++)
	          { 
                  if (strcmp(conta[i].nome,nome_cliente) == 0)
		          { 
                       printf("\n Numero da conta: %d \n",conta[i].num);
                       printf("\n Saldo: %f \n", conta[i].saldo);
		               flag = 1;
		          }
	           }
	     
               if (flag == 0)
		          printf("\n Nao existe conta cadastrada para este cliente\n");
	     
               getch();
	   }// fim opçao 2
	
       if (op == 3)
	   { 
              i = 0;
	          flag = 0;
	          while (i < 15)
	          { 
                    if (conta[i].num != 0)
		            { 
                        if (i==0)
			            { 
                            menor_saldo = conta[i].saldo;
			                posi = i;
                         }
                        else
			            if (conta[i].saldo < menor_saldo)
			               { 
                             menor_saldo = conta[i].saldo;
			                 posi = i;
		                    }
                    flag = 1;
		            }
		            i++;
              }
	      
              if (flag == 0)
		      printf("\n Nenhuma conta foi cadastrada\n");
	          else
		      { 
                  for (i=posi;i<14;i++)
		          { 
                      conta[i] = conta[i+1];
	              } // atualizar registro
		          conta[i].num = 0;
		          strcpy(conta[i].nome,"\0");
		          conta[i].saldo = 0;
		          printf("\n Conta excluída\n");
              }
	       getch();
	    } // fim opção 3
	    
       printf ("\n \n Menu:\n");
       printf ("\n \n --> 1 - Cadastrar contas\n");
       printf ("\n --> 2 - Visualizar contas de um determinado cliente\n");
       printf ("\n --> 3 - Excluir conta de menor saldo\n");
       printf ("\n --> 4 - Sair\n");
       printf ("\n \n --> Digite opcao:\n ");
       scanf ("%d", &op);
    } // fim do while
}

