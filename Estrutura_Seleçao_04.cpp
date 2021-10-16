# include <stdio.h>
# include <conio.h>
main()
{
      int ano1, dia1, mes1, ano2, dia2, mes2;
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
      printf(" *             Estrutura De Selecao if else               *\n");
      printf(" *========================================================*\n");
      printf("\n Digite a Primeira data:");
      printf("\n  ______________ ");
      printf("\n |Dia |Mes |Ano |");
      printf("\n  ______________ \n ");
      scanf("%d%d%d",&dia1,&mes1,&ano1);
      printf("Digite a Segunda data (dd mm aaaa):");
      printf("\n  ______________ ");
      printf("\n |Dia |Mes |Ano |");
      printf("\n  ______________ \n ");
      scanf("%d%d%d",&dia2,&mes2,&ano2);
      if (ano1>ano2)
      printf("A data mais antiga é: %d %d %d", dia2, mes2, ano2);
      else if (ano2>ano1)
      printf("A data mais antiga é: %d %d %d", dia1, mes1, ano1);
      else  if (mes1>mes2)
      printf("A data mais antiga é: %d %d %d", dia2, mes2, ano2);
      else if (mes2>mes1)
      printf("A data mais antiga é: %d %d %d", dia1, mes1, ano1);
      else if (dia1>dia2)
      printf("A data mais antiga é: %d %d %d", dia2, mes2, ano2);
      else
      printf("A data mais antiga é: %d %d %d", dia1, mes1, ano1);
	  getch();
}
