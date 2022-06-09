#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Escreva uma função calcula que:
receba como parâmetros duas variáveis inteiras, X e Y;
retorne em X a soma de X e Y;
retorne em Y a subtração de X e Y.

Pergunta: a passagem dos parâmetros para a função deve ser por valor ou por referência?
*/

int calcula(int *X, int *Y){
    int aux;
    aux = *X;
    *X = *X+*Y;
    *Y = aux-*Y;
}
int main(){
    system("cls");
    int a=1,b=2;
    int *ponteiro_a, *ponteiro_b;
    ponteiro_a = &a;
    ponteiro_b = &b;
    calcula(ponteiro_a,ponteiro_b);
    printf("X: %d   Y: %d", a,b);
    return 0;
    //resposta da pergunta: passado por referencia para modificar o valor na funcao e nao na main
}