#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Fazer uma função divs que:
recebe como parâmetro um número inteiro num por valor e dois números inteiros
max e min por referência (ponteiros);
retorna 0 se o número num é primo e 1 caso contrário.
Se o número não for primo, os conteúdos dos endereços apontados por max e min devem assumir os valores do menor e do maior divisores
inteiros do número, respectivamente, desconsiderando o número 1 e o próprio número num.
*/

int divs(int num, int *max, int *min){
    int resultado = 0;
    *max = *min = 2;
    for(int x=2; x<num; x++){
        if(num % x == 0){
            resultado++;
            *max = x;
        }
    }
    for(int y=num; y>=2; y--){
        if(num % y == 0){
            *min = y;
        }
    }
    if(resultado == 0){
        printf("%d eh um numero primo\n", num);
        *max = num;
        *min = 1;
    }else{
        printf("%d nao eh um numero primo\n", num);
    }
    return 0;
}
int main(){
    system("cls");
    int num = 17,maior_divisor, menor_divisor, *maximo, *minimo;
    maximo = &maior_divisor;
    minimo = &menor_divisor;
    divs(num, maximo, minimo);
    printf("maior divisor: %d   menor divisor: %d", maior_divisor, menor_divisor);
    return 0;
}