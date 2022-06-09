#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime( int a[][5] ) {
  int i,j;
  for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("%6d",a[i][j]);
    };
    printf("\n");
  };
  printf("\n");
};

int main () {
  int cartela[5][5];
  int sorteados[100];
  int i,j,qual;
  srandom (time (0));
  for (i=0;i<99;i++) {
    sorteados[i] = 0;
  };
  


  for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
      do {
        qual = (random() % 100 ) ; 
      } while (sorteados[qual]); 
      cartela[i][j] = qual;
    };
  };

  printf("\nImprimir a Cartela\n");
  imprime(&cartela);
}