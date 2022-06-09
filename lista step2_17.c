#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Fazer um programa para:
receber 10 números inteiros do usuário em um array
copiar os pares para o array pares e os ímpares para o array ímpares, na ordem em que aparecem
mostrar os arrays resultantes no final Ex: se o usuário forneceu
7, 4, 2, 9, 3, 5, 0, 2, 3, 6

o array pares deve conter: 4, 2, 0, 2, 6
o array ímpares deve conter: 7, 9, 3, 5, 3
*/
int main(){
    system("cls");
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int vetor_impares[10], vetor_pares[10];
    printf("valores do vetor:\n");
    for(int x=0; x<10; x++){
        printf("[%d]", vetor[x]);
        vetor_impares[x] = -1;
        vetor_pares[x] = -1;
    }
    for(int x=0;x<10;x++){
        if(vetor[x]%2 == 0){
            vetor_pares[x] = vetor[x];
        }else{
            vetor_impares[x] = vetor[x];
        }
    }
    printf("\nValores no vetor de impares:\n");
    for(int x=0;x<10;x++){
        if(vetor_impares[x] != -1){
            printf("[%d]", vetor_impares[x]);
        }
    }
    printf("\nValores no vetor de pares:\n");
    for(int x=0;x<10;x++){
        if(vetor_pares[x] != -1){
            printf("[%d]", vetor_pares[x]);
        }
    }
    return 0;
}