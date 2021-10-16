#include<stdio.h>
#include<conio.h>
void segundo(int x)
{  int m,h,s,r1,r2;
   h=x/3600;
   r1=x%3600;
   m=r1/60;
   r2=r1%60;
   s=r2;
   printf("\n %d:%d:%d",h,m,s);
   getch();
}
main()
{  int seg;
   printf("Digite os segundos: ");
   scanf("%d",&seg);
   segundo(seg);
   getch();
}
