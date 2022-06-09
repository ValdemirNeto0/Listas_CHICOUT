#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Escreva um programa para:
pedir 10 números ao usuário e armazenar esses valores em um array
pedir um outro número ao usuário e calcular e mostrar quantos números do array são inferiores a esse número.

*/
int main(){
    system("cls");
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10}, num, c = 0;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("valores do vetor:\n");
    for(int x=0; x<10; x++){
        printf("[%d]", vetor[x]);
        if(vetor[x] < num){
            c++;
        }
    }
    printf("\n\nNumeros no vetor menor que %d: %d\n", num, c);
    return 0;
}