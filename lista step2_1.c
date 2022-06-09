#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int recebe_vetor(int *vetor, int n){
    vetor = (int *)(malloc(n*sizeof(int)));
    for(int x=0; x<n; x++){
        printf("Digite um valor:\n");
        scanf("%d", &vetor[x]);
    }
    return vetor;
}

int main(){
    int *vetor, n;
    printf("Digite o numero de posicoes no vetor:\n");
    scanf("%d", &n);
    *vetor = recebe_vetor(vetor,n);
    for(int x=0; x<n; x++){
        printf("valor: %d\n", vetor[x]);
    }
    return 0;
}