/* 10. Faça um programa que receba o codigo correspondente ao cargo de um funcionario e seu salario atual,
e mostre o cargo o valor do aumento e seu novo salario.Os cargos estao na tabela a seguir.*/

//Algoritmo 10.
#include<stdio.h>
#include<conio.h>
//Inicio
main()
{
      float sal_a,val_a,n_sal;
      int cargo;
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
      printf("\n Entre com seu codigo de funcao.\n ");
      printf("\n  ___________________________________________________________ ");
      printf("\n |1-Escrituario |2-Secretario |3-Caixa |4-Gerente |5-Diretor |");
      printf("\n  ___________________________________________________________ \n ");
      scanf("%d",&cargo);
      printf("\n Entre com seu salario atual.\n ");
      scanf("%f",&sal_a);
      if(cargo==1)
      {
                  val_a=((sal_a*50/100));
                  n_sal=sal_a+(sal_a*50/100);
                  printf("\n Seu cargo atual e Escrituario.\n ");
                  printf("\n Seu aumento sera de %0.2f reais e seu novo salario e %0.2f reais.\n ",val_a,n_sal);
                  }
       else if(cargo==2)
       {
                  val_a=((sal_a*35/100));
                  n_sal=sal_a+(sal_a*35/100);
                  printf("\n Seu cargo atual e Secretario.\n ");
                  printf("\n Seu aumento sera de %0.2f reais e seu novo salario e %0.2f reais.\n ",val_a,n_sal);
                  }
       else if(cargo==3)
       {
                  val_a=((sal_a*20/100));
                  n_sal=sal_a+(sal_a*20/100);
                  printf("\n Seu cargo atual e Caixa.\n ");
                  printf("\n Seu aumento sera de %0.2f reais e seu novo salario e %0.2f reais.\n ",val_a,n_sal);
                  }
       else  if(cargo==4)
       {
                   val_a=((sal_a*10/100));
                   n_sal=sal_a+(sal_a*10/100);
                   printf("\n Seu cargo atual e Gerente.\n ");
                   printf("\n Seu aumento sera de %0.2f reais e seu novo salario e %0.2f reais.\n ",val_a,n_sal);
                   }
       else if(cargo==5)
       {
                   printf("\n Seu cargo atual e Diretor.\n ");
                   printf("\n No momento voce nao tem aumento Salarial.\n ");
                   }
       else
       printf("\n A opcao digitada e invalida!!!");
       getch();
}
                  
