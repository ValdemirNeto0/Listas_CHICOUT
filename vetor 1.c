#include <stdio.h>

 main(){
int A[] = {1,0,5,-2,-5,7};
int i,soma;
soma = A[0] + A[1] + A[5];
printf("Soma de A[0],A[1],A[5]:%d \n", soma);
A[4] = 100;
for (i=0;i<6;i++){
printf("valor do vetor A [%d]\n", A[i]);
}
return 0;   
}