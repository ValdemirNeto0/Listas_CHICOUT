#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Faça um programa que: receba dez números de até 4 dígitos do usuário em um vetor adequado
agrupe os números que são permutação uns dos outros, mostrando os grupos.

Ex: para a digitação dos números:
647	123 45	476	37	312	674	504	48	73

O resultado deve ser:
Grupo 1: 647, 476, 674
Grupo 2: 123, 312
Grupo 3: 45, 504
Grupo 4: 37, 73
Grupo 5: 48
*/
int main(){
    system("cls");
    int vetor[10] = {647,123,45,476,37,312,674,504,48,73};
    int r1,r2,r3,r4,t1,t2,t3,t4,c=0;
    for(int x=0; x<10; x++){
        printf("[%d] ", vetor[x]);
        r1 = vetor[x]/1000;
        r2 = (vetor[x]%1000)/100;
        r3 = ((vetor[x]%1000)%100)/10;
        r4 = (((vetor[x]%1000)%100)%10)/1;
        for(int y=x+1; y<10;y++){
            t1 = vetor[y]/1000;
            t2 = (vetor[y]%1000)/100;
            t3 = ((vetor[y]%1000)%100)/10;
            t4 = (((vetor[y]%1000)%100)%10)/1;
            if((r1==t1||r1==t2||r1==t3||r1==t4)&&(r2==t1||r2==t2||r2==t3||r2==t4)&&(r3==t1||r3==t2||r3==t3||r3==t4)&&(r4==t1||r4==t2||r4==t3||r4==t4)){
                printf("%d ", vetor[y]);
            }
        }
        c++;
        printf("\n");
        if(c == 5){
            return 0;
        }
    }
    return 0;
}