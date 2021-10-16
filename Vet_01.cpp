/* 1.Leia um vetor de 12 posições,em seguida leia também 2 valores X e Y qualquer correspondentes a duas posições no vetor.
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições.*/

//Algoritmo.01
#include<stdio.h>
#include<conio.h>
//Inicio
main()
{
      //Declara vet[12],x,y,soma=0,i,inteiro;
       int vet[12],x,y,soma=0,i;
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
       printf(" *             Estrutura De Vetores e Strings             *\n");
       printf(" *========================================================*\n");
       //Inicializo o for de 1 ate 10 andando de 1 em 1...
       for(i=1;i<=12;i++)
       {
                        //Peço ao usuario os valores do vetor 
                        printf("\n Digite Valores do Vetor: ?\b");
                        //Faço a leitura de todos os dados e armanzeno em seus endereço "&".
                        scanf("%d",&vet[i]);
       }/*Finalizo o primeiro for
       Imprimo uma Nova menssagem a usuario pedindo novos dados.*/ 
       printf("\n Digite duas posicoes:\n");
       printf("\n A: ?\b");
       scanf("%d",&x);
       printf("\n B: ?\b");
       //leio os dados digitados pelo usuario e armazeno em suas distintas variaveis.
       scanf("%d",&y);
       //Inicializo novo for fazendo a leitura de todos os dados.
       for(i=1;i<=12;i++)
       {
                        /*Inicio da parte de seleçao onde realizo as comparaçoes pedidas e seus comando as serem realizados,
                        sendo todos dentro do for repetindo todas as vezes nescessarias*/
                        if((i==x)&&(i==y));
                        soma=vet[x]+vet[y];
                        
       }/*Finalizo o segundo for
       Imprimo os resultados desejados pelo usuario*/
       printf("\n A soma da posicao %d e %d = %d",x,y,soma);
       getch();
}//Finalizo o programa colando a chaves
