//algoritmo de varias variaveis com media de 10!
#include<stdio.h>
#include<conio.h>
main()
{
	int amostra[10],i,med;
	for (i=1;i<=10;i++) 
    {
		printf("\n Digite numero %d:",i);
		scanf ("%d",&amostra[i]);
	}
	med=0;
	for (i=1;i<=10;i++)
    {
        med=med+amostra[i];
	    printf("\n A media e %d ",(med/10));
    }
    getch();
}

