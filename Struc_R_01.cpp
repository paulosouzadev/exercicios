/* 1.Um funcionario de uma empresa recebe aumento salarial anualmente.Sabe-se que:
        a)Esse funcionario foi contratado em 1995 com salario inicial de 1000.00 R$.
        b)Em 1996 recebeu aumento de 1,5% sobre o salario inicial.
        c)A partir de 1997,o aumentos salarias sempre correspoderam ao dobro do percentual do ano anterior.
     
     Faça um programa que determine o salario atual desses funcionario.*/ 

//Algoritmo.1               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
      float sal,x;
      int i,ano;
      x=0.015;
      sal=1000;
      printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
      printf(" %c                                                            %c\n",186,186);
      printf(" %c           ___   ___ _________ ___   ___ _________          %c\n",186,186);
      printf(" %c           XXX   XXX XXXXXXXXX XXX_  XXX XXXXXXXXX          %c\n",186,186);
      printf(" %c           XXX   XXX XXXXXXXXX XXXX_ XXX XXXXXXXXX          %c\n",186,186);
      printf(" %c           XXX   XXX XXX____   XXXXX_XXX XXX___XXX          %c\n",186,186);
      printf(" %c           XXX   XXX XXXXXXX   XXXXXXXXX XXXXXXXXX          %c\n",186,186);
      printf(" %c           XXX___XXX XXX______ XXX XXXXX XXXXXXXXX          %c\n",186,186);
      printf(" %c           XXXXXXXXX XXXXXXXXX XXX  XXXX XXX                %c\n",186,186);
      printf(" %c           XXXXXXXXX XXXXXXXXX XXX   XXX XXX                %c\n",186,186);
      printf(" %c                                                            %c\n",186,186);
      printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
      printf(" %c                                                            %c\n",186,186);
      printf(" %c             CAMPUS LUIZ MENEGHEL - FALM - PR               %c\n",186,186);
      printf(" %c      PAULO CESAR ALVES DE SOUZA - Programa%cao 1 - SI       %c\n",186,135,186);	
      printf(" %c          E-mails: paulosouza_band@hotmail.com              %c\n",186,186);
      printf(" %c                                                            %c\n",186,186);
      printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);	
      printf(" %c                                                            %c\n",186,186);
      printf(" %c            Estrutura De Repeti%cao for while                %c\n",186,135,186);
      printf(" %c                                                            %c\n",186,186);
      printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
      printf ("\n  \"Enter\" para iniciar os calculos de seu novo salario.");
      getchar();
      system("cls");
      printf("\n Entre com ano atual.\n ");
      scanf("%d",&ano);
      for(i=1996;i<=ano;i++)
      {
          sal=sal+(sal*x/100);
          x=x+x;
      }
      printf("\n Seu salario atual %c:\n %5.2fR$.",130,sal);
      printf("\n\n");
      system("pause");
}
