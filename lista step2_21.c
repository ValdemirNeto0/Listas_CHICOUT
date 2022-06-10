#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Faça um programa para receber do usuário a dimensão de um array (máx. 20),
os elementos desse array e efetuar a sua ordenação utilizando o método da bolha (bubble-sort).
*/

int main(){
    system("cls");
    int array[10] = {25,12,64,36,78,98,15,26,32,1}, aux;
    for(int x=0; x<10;x++){
        printf("[%d]", array[x]);
    }
    printf("\n");
    for(int x=0; x<10;x++){
        for(int y=0; y<10;y++){
            if(array[y] > array[y+1]){
                aux = array[y+1];
                array[y+1] = array[y];
                array[y] = aux;
            }
        }
    }
    for(int x=0; x<10;x++){
        printf("[%d]", array[x]);
    }
    return 0;
}