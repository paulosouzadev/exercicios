/* 15.Faça um programa que receba a idade de 15 pessoas e que calcule e mostre:
           a)A quantidade de pessoas em cada faixa etaria.
           b)A percentagem de pesssoas na primeira e na ultima faixa etaria com relaçao total de pessoas.
a 18 anos.
          Obs.Programa modificado para maior funcionalidade!!!*/ 

//Algoritmo.15               
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i,id,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,nl=1,porc1,porc5;
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
      printf(" *            Estrutura De Repetiçao For While            *\n");
      printf(" *========================================================*\n");
      for (i=1;i<=5;i++)
      {      
              printf("\n Entre com a %da idade.\n ",nl);
              scanf("%d",&id);
              nl++;
              if(id<=15)
              cont1++;
              else if((id>=18)&&(id<=30))
              cont2++;
              else if((id>=31)&&(id<=45))
              cont3++;
              else if((id>=46)&&(id<=60))
              cont4++;
              else if((id>61))
              cont5++;
      }
      system("cls");
      printf("\n Ha 1a Faixa Etaria Ate 15 anos possui:\n %d Pessoas.\n",cont1);
      printf("\n Ha 2a Faixa Etaria de 16 ate 30 possui:\n %d Pessoas.\n",cont2);
      printf("\n Ha 3a Faixa Etaria de 31 ate 45 possui:\n %d Pessoas.\n",cont3);
      printf("\n Ha 4a Faixa Etaria de 46 ate 60 possui:\n %d Pessoas.\n",cont4);
      printf("\n Ha 5a Faixa Etaria de 61 mais possui:\n %d Pessoas.\n",cont5);
      printf("\n Ha porcentagem da 1a faixa e de:%d.",porc1=((cont1*100)/15));
      printf("\n Ha porcentagem da 5a faixa e de:%d.",porc5=((cont5*100)/15));
      getchar();printf(" Pressione \"Enter\" para continuar...\n");
	  getchar();
}
