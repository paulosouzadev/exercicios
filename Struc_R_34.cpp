#include<stdio.h>
#include<conio.h>
main()
{
      int cod, id, ts, tecla=1, maior=0, novo, aux1,aux2, cont, ac;
	  char sexo;
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
      printf(" *            Estrutura De Repeticao for while            *\n");
      printf(" *========================================================*\n");
	  printf ("\nDigite o codigo do funcionario");
      scanf ("%d", &cod);
      printf ("\nDigite a idade");
      scanf ("%d", &id);
      printf ("\nDigite o sexo");
      scanf ("%s", &sexo);
      printf ("\nDigite o tempo de serviço");
      scanf ("%d", &ts);	
	  novo=id;
      while (tecla!=2)
      {
            if (ts>maior)
            {
                         ts=maior;
                         aux1=cod;
            }
            if (id<novo)
            {
                        novo=id;
                        aux2=cod;
            }
            cont++;
            ac=ac+id;
	        printf ("\nDeseja continuar ? 1-sim e 2-não");
	        scanf("%d", &tecla);
            if (tecla==1)
            {
                         printf ("\nDigite o código do funcionário");
                         scanf ("%d", &cod);
                         printf ("\nDigite a idade");
                         scanf ("%d", &id);
                         printf ("\nDigite o sexo");
                         scanf ("%s", &sexo);
                         printf ("\nDigite o tempo de serviço");
                         scanf ("%d", &ts);   
            }
      }
            printf("\nfuncionário maior:%d",aux1);
            printf("\nFuncionário maior:%d",aux2);
            printf("\nMédia idade:%f",ac/cont);     
            getch();
}
