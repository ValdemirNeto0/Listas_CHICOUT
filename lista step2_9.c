#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Escreva uma função que recebe como parâmetros um vetor de inteiros positivos, o número de elementos dele,
e ponteiros para argumentos de saída, nos quais devem ser armazenados os valores máximo e mínimo do vetor,
assim como a média dos valores. O protótipo da função deve ser:
void minMaxMedio (int* vetor, int tam, int* min, int* max, double* medio);
*/

void minMaxMedio(int *vetor, int tam, int *min, int *max, float* media){
    int soma=0;
    for(int x=0; x<tam; x++){
        printf("Digite um valor:\n");
        scanf("%d", &vetor[x]);
        soma = soma+vetor[x];
        if(x == 0){
            *max = vetor[x];
            *min = vetor[x];
        }else{
            if(vetor[x] < *min){
                *min = vetor[x];
            }
            if(vetor[x] > *max){
                *max = vetor[x];
            }
        }
    }
    *media = soma/tam;
}
int main(){
    system("cls");
    int *v, tamanho=3, *minimo, *maximo;
    float *m;
    v = (int *)malloc(tamanho*sizeof(int));
    minimo = (int *)malloc(sizeof(int));
    maximo = (int *)malloc(sizeof(int));
    m = (float *)malloc(sizeof(float));
    minMaxMedio(v, tamanho, minimo, maximo, m);
    printf("\nvalor minimo: %d   valor maximo: %d   media: %.2f\n", *minimo, *maximo, *m);
    return 0;
}