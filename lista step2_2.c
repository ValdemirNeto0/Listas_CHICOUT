#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int fatores(int vetor[10], int n, int *x){
    int cont = 0;
    x = (int *)malloc(sizeof(int));
    *x = 0;
    while(n>1){
        if(n%2 == 0){
            vetor[cont] = 2;
            cont++;
            n = n/2;
            *x = *x+1;
        }else if(n%3 == 0){
            vetor[cont] = 3;
            n = n/3;
            *x = *x+1;
        }else if(n%5 == 0){
            vetor[cont] = 5;
            n = n/5;
            *x = *x+1;
        }else if(n%7 == 0){
            vetor[cont] = 7;
            n = n/7;
            *x = *x+1;
        }else if(n%11 == 0){
            vetor[cont] = 11;
            n = n/11;
            *x = *x+1;
        }else if(n%13 == 0){
            vetor[cont] = 13;
            n = n/13;
            *x = *x+1;
        }else if(n%17 == 0){
            vetor[cont] = 17;
            n = n/17;
            *x = *x+1;
        }else if(n%19 == 0){
            vetor[cont] = 19;
            n = n/19;
            *x = *x+1;
        }else if(n%23 == 0){
            vetor[cont] = 23;
            n = n/23;
            *x = *x+1;
        }else if(n%29 == 0){
            vetor[cont] = 29;
            n = n/29;
            *x = *x+1;
        }
    }
    printf("numero de fatores primos encontrados: %d\n", *x);
    if(*x > 10){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int numero, vetor[10], *x;
    printf("Digite o numero que deseja fatorar:\n");
    scanf("%d", &numero);
    fatores(vetor,numero,x);
    return 0;
}