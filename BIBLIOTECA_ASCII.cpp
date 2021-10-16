/* Tabela de verificaçao de todos caracteres especiasis*/

#include<stdio.h> 
#include<stdlib.h>
#include<conio.h> 
int main() 
   {
      int i; 
      i = 0; 
      printf ("\n TABELA ASCII:\n \t"); 
      while(i<256) 
      {
          printf (" %d - %c  \t",i,i); 
          i++; 
      }
      getch(); 
  }
