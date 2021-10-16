#include<stdio.h>
#include<conio.h>

int soma(int x,int y,int z)
{
    int res=0,s=0,r,i;
    
    for(i=y;i<=z;i++)
    {  
    if((i%x)==0)
    s=s+i;           
    }
    return (s);    
    
}
  main(void)
{
  int a,b,c,s;
  printf("Digite um numero: ");
  scanf("%d",&a);
  while(a>1)
  {
    printf("\n Numero invalido.\n Digite outro numero: ");
    scanf("%d",&a);
  }
  printf("\nDigite o segundo numero: ");
  scanf("%d",&b);
  printf("\nDigite o terceiro numero: ");
  scanf("%d",&c);
  s=soma(a,b,c);
  printf("\n\nA soma eh: %d",s);
  getch();
}
