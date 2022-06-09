#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int funcao_char(char *a, char *b, int n){
    int cont = 0;
    for(int x=0; x<n; x++){
        b[x] = a[x];
        cont ++;
        if(a[x+1] == ' '){
            return cont;
        }
    }
    return cont;
}

int main(){
    char frase_1[] = "valdemir Pessoa de Carvalho Neto";
    char frase_2[33] = {};
    char *a,*b;
    int x, c;
    a = frase_1;
    b = frase_2;
    printf("quantos caracteres do primeiro vetor voce deseja copiar para o segundo:\n");
    scanf("%d", &x);
    c = funcao_char(a,b,x);
    printf("numero de caracteres copiados: %d\n", c);
    for(int z=0; z<33; z++){
        printf("%c", a[z]);
    }
    printf("\n");
    for(int y=0; y<33; y++){
        printf("%c", b[y]);
    }
    return 0;
}