int main() { 
  int linha,coluna;
  int matriz[4][4];
  int mairo = -9999;
  int onde_linha;
  int onde_coluna;
  int achou;
  printf("Informe os 16 valores para carregar a matriz\n");
  for (linha=0;linha<4;linha++){
    for (coluna=0;coluna<4;coluna++){
      printf("Informe o valor do elemento %3d / %3d \n ",linha,coluna);
      scanf("%d",&matriz[linha][coluna]) ;
    };
  };
  printf("\nExibindo a matriz informada \n");
  printf( "l\\c .0.. .1.. .2.. .3.. \n");
  for (linha=0;linha<4;linha++){
    printf("%1d ", linha);
    for (coluna=0;coluna<4;coluna++){
      printf("%5d", matriz[linha][coluna]);
      if (matriz[linha][coluna]> mairo) {
        mairo = matriz[linha][coluna];
        onde_linha = linha;
        onde_coluna = coluna;
      };
    };
    printf("\n");
  };
  printf("Encontrado o valor %d na linha %d e coluna %d",mairo,onde_linha,onde_coluna);
  
  }