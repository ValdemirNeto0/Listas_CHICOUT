#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Fazer uma função que:
receba 3 números como parâmetros: A, B e C.
ordene de tal forma que, ao final da função, A contenha o menor número e C o maior.
Fazer um programa que receba 3 números do usuário, chame a função e mostre os números ordenados.
*/

int funcao(int A, int B, int C){
    int *ponteiro, menor, maior, meio;
    printf("A: %d\tB: %d\tC: %d\n", A,B,C);
    //determina o menor
    if(C<A && C<B){
        //C eh o menor
        menor = C;
        if(B<A){
            //B eh o do meio
            meio = B;
            maior = A;
        }else{
            meio = A;
            maior = B;
        }
    }else if(B<A && B<C){
        //B eh o menor
        menor = B;
        if(A<C){
            meio = A;
            maior = C;
        }else{
            meio = C;
            maior = A;
        }
    }else{
        //A eh o menor entao fica igual
        menor = A;
        if(B<C){
            meio = B;
            maior = C;
        }else{
            meio = C;
            maior = B;
        }
    }
    ponteiro = &A;
    *ponteiro = menor;
    ponteiro = &B;
    *ponteiro = meio;
    ponteiro = &C;
    *ponteiro = maior;

    printf("A: %d\tB: %d\tC: %d\n", A,B,C);

}
int main(){
    system("cls");
    int a=3,b=2,c=1;
    funcao(a,b,c);
    return 0;
}