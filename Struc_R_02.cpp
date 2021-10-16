/* 2.Faça um programa que verifique e mostre os nuemros entre 1000 e 2000,que quando disiveis por 11 produzam resto igual 5.*/

//Algoritmo.2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int resto,i;
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
    printf(" *            Estrutura De Repeticao for while            *\n");
    printf(" *========================================================*\n"); 
    for(i=1000;i<=2000;i++)
    {
                           resto=i%11;
    	                   if(resto==5)
                           printf("\n O numero %d quando divido por 11 produzem resto %d.\n",i,resto);
                           }
                           printf("\n\n");
                           system("pause");
}
