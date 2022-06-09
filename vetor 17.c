#include <stdio.h>

int main(void) {
  int vet[5],i,zero=0;

  for(i=0;i<5;i++){
    printf("%i° Numero:",i+1);
    scanf("%i",&vet[i]);
    if (vet[i]<zero){
      vet[i] = zero;
      }
    }
  printf("Numero:");
  for(i=0;i<5;i++){
    printf("%i ",vet[i]);
    }
}