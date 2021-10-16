//Desenvolva um algoritmo com vetor de 40 posiçoes!!!
#include<stdio.h>
#include<conio.h>
main()
{
      int x[40],i;
      for(i=0;i<=39;i++)
      {
      printf("digite os numeros");
      scanf("%d",&x[i]);
      }
      for (i=0;i<=39;i++)
      {
      if(x[i]<0)
      x[i]=0;
      }
      for(i=0;i<=397;i++)
      {
      printf("\n %d\n",x[i]);
      }
      getch();
}
