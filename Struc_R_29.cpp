# include <stdio.h>
# include <conio.h>
main()
{
      int c1, c2, c3, c4, c5, ct, voto, total;
      float perc;
      c1=c2=c3=c4=c5=0;
      printf("\n digite voto");
      scanf("%d",&voto);
      while((voto<0)&&(voto>5))
      {
            printf("\n Opção invalida.");
            }
            while((voto>0)&&(voto<=5))
            {     
                  if(voto==1)
                  c1++;
                  else if(voto==2)
                  c2++;
                  else if(voto==3)
                  c3++;      
                  else if(voto==4)
                  c4++;
                  else
                  c5++;
                  printf("\n Digite novamente");
                  scanf("%d", &voto); 
                  }
                  printf("\n Candidato1:%d", c1);
                  printf("\n Candidato1:%d", c2);
                  printf("\n Candidato1:%d", c3);
                  printf("\n Candidato1:%d", c4);
                  printf("\n Candidato1:%d", c5);
                  total=c1+c2+c3+c4+c5;
                  perc=(c4+c5)*100/total;      
                  printf("\n Percentual de brancos e nulos: %f", perc);
                  getch();
}
