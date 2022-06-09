#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int vet[8],x,y,i,soma;

printf("Vetor\n");  
for(i=1;i<=8;i++){
printf("%i-> ",i); 
scanf("%i",&vet[i]);
}
x = vet[1];  
y = vet[8];
printf("O valor do vetor X e: %i\n",x);
printf("O valor do vetor Y e: %i\n",y);
soma=vet[1]+vet[8];
printf("\n A soma de X e Y: %i",soma);

return 0;
}