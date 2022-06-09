#include <stdio.h>

void imprime( int a[][4] ) {
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
  int v[4][4];
  int i,j;

  for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
       v[i][j] = (rand() % 20) +1 ;
    }
  };
  printf("\nImprimir a matriz original\n");
  imprime(&v);


  for (i=0;i<4;i++) {
    for (j=i+1;j<4;j++)
      v[i][j] = 0;
  };
  printf("\nvai imprimir a triangular inferior\n");
  imprime(&v);
}