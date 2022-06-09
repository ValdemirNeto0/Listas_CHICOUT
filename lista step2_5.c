#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Fazer uma função com as seguintes características:
recebe dois números inteiros como parâmetros.
retorna 1 se os números são iguais, 0 se são diferentes e –1 se a soma ou o produto estoura a faixa dos inteiros.
Além disso, retorna a soma e o produto dos dois números.
Fazer um programa para receber dois números do usuário, chamar a função e mostrar se os números são iguais.
Além disso, mostrar sua soma e seu produto.
*/

int funcao(int x, int y){
    int result;
    int *pont, *pont2;
    pont = (int *)malloc(sizeof(int));
    result = x*y;
    pont2 = &result;
    *pont = x+y;
    printf("Soma de %d e %d: %d\n", x,y, *pont);
    printf("Multiplicacao de %d e %d: %d\n", x,y, *pont2);
    if((x > 0 && y > 0 && x+y < 0) || (x>0 && y>0 && x*y<0) || (x<0 && y<0 && x+y>0) || (x<0 && y<0 && x*y>0) || *pont > __INT_MAX__ || *pont2 > __INT_MAX__){
        printf("Estrapolou!\n");
        return -1;
    }
    if(x == y){
        printf("Os dois numeros sao iguais");
        return 1;
    }
    if(x != y){
        printf("Os dois numeros sao diferentes!\n");
        return 0;
    }
}

int main(){
    system("cls");
    int n,m;
    printf("Digite o valor do numero 1:\n");
    scanf("%d", &n);
    printf("Digite o valor do numero 2:\n");
    scanf("%d", &m);
    funcao(n,m);
    return 0;
}