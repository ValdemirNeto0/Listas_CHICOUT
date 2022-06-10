#include <stdio.h>

int main(void) {
int grao,espiga=150,perca;
int tonelada=100000000,ano=0,colheta=0;

  do{
    ano++;
    grao = espiga + colheta;
    perca = (10*grao)/100;
    grao = grao - perca;
    colheta = grao * (espiga*2);
    
  } while(tonelada >= colheta);
  printf("\nLevou %i anos",ano); 
  printf("\nColheta %i", colheta-450);
  printf("\nToneladas %i",tonelada);

  
  return 0;
}