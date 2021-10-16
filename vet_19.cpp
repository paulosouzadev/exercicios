#include<stdio.h>
#include<conio.h>
main()
{
      int x1[10],x2[10],x3[20],i;
      for(i=0;i<=9;i++)
      {
                       printf("\n Digite um numero.\n");
                       scanf("%d%d",&x1[i],&x2[i]);
      }
      for(i=0;i<=19;i++)
      {
                        x3[i]=x1[i]+x2[i];
      }
      printf("\n A soma dos vetores %d.",x3[i]);
      getch();
}
