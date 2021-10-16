/* 9. Faça um algoritmo que determine a data cronologicamente maior de duas datas fornecidas pelo usuário.
cada data dever ser fornecida por tres valores inteiros,o primeiros representa o dia, o segundo o mes e terceiro o ano.*/

//Algoritmo 9.
#include<stdio.h>
#include<conio.h>
//Inicio
main()
{
      int alt,peso,sexo;
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
      printf("\n Digite sua Altura e 1 ou 2 para seu sexo.\n ");
      printf("\n  ____________________________________ ");
      printf("\n |Altura |Masculino = 1 |Feminino = 2 |");
      printf("\n  ____________________________________ \n ");
      scanf("%d%d",&alt,&sexo);
      if(sexo==1)
      {
                 peso=(72.7*alt)-58;
                 printf("\n Sua altura e de %d cm e seu peso ideal e de %d kg.\n",alt,peso);
                 }
                 else if(sexo==2)
                 {
                      peso=(62.1*alt)-44.7;
                      printf("\n Sua altura e de %d cm e seu peso ideal e de %d kg.\n",alt,peso);
                      }
                      else
                      printf("\n A opcao digitada e invalida!!!");
                      getch();
}
