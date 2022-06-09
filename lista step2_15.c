#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Faça um programa que dado o array unidimensional [2; 4; 35; 50; 23; 17; 9; 12; 27; 5] retorne:
maior valor
média dos valores
os valores dispostos em ordem crescente
sub conjunto de valores primos que está contido no array
*/
int main(){
    int vetorU[10] = {2,4,35,50,23,17,9,12,27,5};
    int j,i,aux,soma=0;
    float media;
    printf("Os valores do vetor e : \n\n");
    for(i=0;i<10;i++){
        printf("vetorU[%d] %d\n",i,vetorU[i]);
        soma = soma + vetorU[i];
    }
    media = (soma/10);
    for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
            if(vetorU[i] > vetorU[j]){
                aux = vetorU[i];
                vetorU[i] = vetorU[j];
                vetorU[j] = aux;
            }
        }
    }
    printf("\nA ordem crescente e: ");
        for(i=0; i<10; i++){
            printf("%d,",vetorU[i]);
        }
    printf("\n\nO maior valor e: %d\n",vetorU[9]);
    printf("A media e: %.2f\n\n",media);
    return 0;
}