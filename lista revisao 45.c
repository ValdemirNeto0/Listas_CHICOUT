#include <stdio.h>

void inverte(int vetor_A[ ], int posicao)
{
  int auxiliar, tamanho_vetor = posicao - 1;
  for(posicao = 0; posicao <= tamanho_vetor; posicao++){
    auxiliar = vetor_A[posicao];
    vetor_A[posicao] = vetor_A[tamanho_vetor];
    vetor_A[tamanho_vetor] = auxiliar;
    tamanho_vetor--;
  }
}

int main(){
  int vetor_A[3], posicao;
  for(posicao = 0; posicao < 3; posicao++){
    printf("Entre com os valores:\n");
     scanf(" %d", &vetor_A[posicao]);
  }

  printf("\n");

  inverte(vetor_A, posicao);

  int tamanho = posicao;
  for (posicao = 0; posicao < tamanho; posicao++){
    printf("%d ", vetor_A[posicao]);
  }
  printf("\n");

  return 0;
}