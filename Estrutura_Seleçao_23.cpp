//Faça um programa que receba um C=(casado);S(solteiro);D(divorciado);V(viuvo)
//e imprima na tela do usuario o resultado!!!
#include<stdio.h>
#include<conio.h>
main()
{
      char estciv;
      printf("\n Digite o codigo do estado civil\n");
      scanf("%c",&estciv);
      if (estciv == 'c')
      printf("\n Individuo e casado!!!\n");
      else if (estciv == 's')
      printf("\n Individuo e solteiro!!!\n");
      else if (estciv == 'd')
      printf("\n Individuo e divorciado!!!\n");
      else if (estciv == 'v')
      printf("\n Individuo e viúvo!!!\n");
      else
      printf("\n Dado digitado e invalido!!!\n");
      printf("\n Grato por participar da pesquisa!!!\n");
      getch();
}
