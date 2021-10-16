/* 6.Faça um algoritmo que leia 5 pares de valores (a,b) todos inteiros e positivo,um de cada vez mostre os numeros inteiros pares
de A ate B.*/

//Algoritmo.6
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{     
      int a,b,i,j;
      for(j=1;j<=5;j++)
      {   
          printf("\n Digite O Valor De \"A\".\n ");
          scanf("%d",&a);
          printf("\n Digite O Valor De \"B\".\n ");
          scanf("%d",&b);
          printf("Os Valores Pares de \"A\" Ate \"B\" Sao:");
          for(i=a;i<=b;i++)
          {
              if((i%2)==0) 
              printf("%d ",i);    
          }
          printf("\n\n");
          getchar();printf(" Pressione \"Enter\" para continuar...\n");
	      getchar();
          system("cls");
      }
      getch();
}
