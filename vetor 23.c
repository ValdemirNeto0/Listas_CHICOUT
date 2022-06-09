#include<stdio.h>

void main(){

  int i;
  float x[5], y[5];

  printf("\nInforme os números do vetor x:");
  for(i=0;i<5;i++){
    scanf("%f", &x[i]);
  }
	
	printf("\nInforme os números do vetor y:");
  for(i=0;i<5;i++){
    scanf("%f", &y[i]);
  }
   printf("\n\n números do vetor x:");
  for(i=0;i<5;i++){
    printf("%.2f", x[i]);
  }
	
	printf("\n números do vetor y:");
  for(i=0;i<5;i++){
    printf("%.2f", y[i]);
  }
}