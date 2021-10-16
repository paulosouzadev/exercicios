#include<stdio.h>
#include<conio.h>

float volume(float x)
{  float res;
   res=(4/3)*(x*x*x);
   return(res);
}

int main(void)
{  float r,v;
   printf("Digite o raio de uma circunferencia: ");
   scanf("%f",&r);
   v=volume(r);
   printf("\nO volume eh: %f",v);
   getch();
}
