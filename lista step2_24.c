#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Um pecuarista possui uma determinada quantia de bois, que possuem um identificador numérico (de 1 a n) cada um.
Faça um programa que:
receba o peso de cada boi, um por vez, e o armazene em um vetor.
Se o peso digitado for 0 significa que não há mais bois a serem digitados;
mostre a lista de todos os bois com seus identificadores e também os identificadores do boi mais gordo e do boi mais magro. Se houver dois ou mais bois mais gordos ou mais magros mostrar o de menor identificador;
Faça o mesmo programa considerando que o número de bois é fixo e igual a dez.
*/

int main(){
    system("cls");
    int numero_bois = 4;
    float bois[numero_bois], mais_gordo, mais_magro;
    for(int x=0; x<numero_bois; x++){
        printf("Peso do boi %d:\n", x+1);
        scanf("%f", &bois[x]);
        if(x == 0){
            mais_gordo = mais_magro = bois[x];
        }else{
            if(mais_gordo < bois[x]){
                mais_gordo = bois[x];
            }
            if(mais_magro > bois[x]){
                mais_magro = bois[x];
            }
        }
    }
    for(int x=0; x<numero_bois; x++){
        printf("Peso d boi %d: %.2f\n", x+1, bois[x]);
    }
    printf("Boi mais pesado: %.2f\n", mais_gordo);
    printf("Boi mais leve: %.2f\n", mais_magro);
    return 0;
}