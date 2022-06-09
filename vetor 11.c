#include <stdio.h>

int main(void) {
  int num[15],neg,soma,i;
  
  for(i=0;i<15;i++){
  printf("%d Numero:",i+1);
    scanf("%d",&num[i]);    
    soma += num[i];
  if (num[i]<0){
    neg++;
  }    
    }
  
  printf("\nSoma:%d",soma);
  printf("\nNumeros negativos:%d",neg);
  return 0;
}