#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Pode-se calcular a área de um polígono a partir das coordenadas de seus vértices utilizando a seguinte fórmula:
Area = soma (X(n)*Y(n+1) – X(n)*Y(n-1)) / 2 sendo que:
p/ n = 1, n-1 = N (número de vértices) p/ n = N, n+1 = 1

Escrever um programa em C que:
receba o número de vértices N do usuário
receba N pares de coordenadas (X,Y) dos vertíces do polígono em arrays adequados.
calcule e mostre a área segundo a fórmula acima
*/
typedef struct{
    int X,Y;
}Coordenadas;

int main(){
    system("cls");
    int N, somatorio;
    float area_1, area_2, area_poligono;
    printf("Digite o numero de lados:\n");
    scanf("%d", &N);
    Coordenadas a[N];
    //preenche
    for(int x=0; x<N; x++){
        printf("Cordenada X:\n");
        scanf("%d", &a[x].X);
        printf("Cordenada Y:\n");
        scanf("%d", &a[x].Y);
    }

    //area 1
    somatorio = 0;
    for(int x=0; x<N; x++){
        if(x+1 == N){
            somatorio += a[x].X * a[0].Y;
        }else{
            somatorio += a[x].X * a[x+1].Y;
        }
    }
    area_1 = somatorio;
    printf("Area 1: %.2f\n", area_1);

    //area 2
    somatorio = 0;
    for(int x=0; x<N; x++){
        if(x+1 == N){
            somatorio += a[x].Y * a[0].X;
        }else{
            somatorio += a[x].Y * a[x+1].X;
        }
    }
    area_2 = somatorio;
    printf("Area 2: %.2f\n", area_2);

    //area do poligono
    if(area_1 > area_2){
        area_poligono = area_1 - area_2;
    }else{
        area_poligono = area_2 - area_1;
    }
    printf("Area do poligono: %.2f\n", area_poligono);
    return 0;
}