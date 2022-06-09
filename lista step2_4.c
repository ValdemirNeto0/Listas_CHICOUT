#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*Fazer um programa para:
declarar variáveis a, b, c, d do tipo int.
declarar variáveis e, f, g, h do tipo float.
declarar vetor v de 10 elementos do tipo char.
declarar variável x do tipo int.
criar um ponteiro apontando para o endereço de a.
incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.
*/
int main(){
    int a=1,b=2,c=3,d=4;
    float e=5.1,f=6.1,g=7.1,h=8.1;
    char v[10] = "valdemineto";
    int xy = 9;
    int *z;
    z = &a;
    for(int x=0; x<16; x++){
        printf("%d ", *z);
        if(z == &a||z == &b||z == &c||z == &d || z == &e||z == &f||z == &g||z == &h||z == &v||z == &xy){
            printf("\nmemoria ja usada\n");
        }else{
            printf("\nmemoria nao ultilizada\n");
        }
        z-=1;
    }
    return 0;
}