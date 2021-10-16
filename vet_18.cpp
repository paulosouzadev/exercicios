#include<stdio.h>
#include<conio.h>
main()
{
      int vet_x[10],i,j;
      for(i=0;i<=9;i++)
      {
                       printf("\n Digite os valores!");
                       scanf("%d",&vet_x[i]);
      }
      
      for(j=1;j<=9;j++)
      {
            for(i=0;i<=9;i++)           
                        if((i!=j)&&(vet_x[i]==vet_x[j]))
                        printf("\n Valores iguais sao %d!",vet_x[i]);
      }
      getch();                            
                     
      
}
      
