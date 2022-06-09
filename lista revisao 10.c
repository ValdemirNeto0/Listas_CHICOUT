#include <stdio.h>
#include <stdlib.h>

int main(){
  int vcarro,vp,multa;

  printf ("permitida na avenida:");
  scanf("%d",&vp);
  printf("velocidade do carro:");
  scanf("%d",&vcarro);
  if(vcarro>vp){
    multa = (vcarro-vp)*5; 
    printf("\nA multa foi de-->%d reais\n",multa);
  }else{
    printf("\nVeiculo dentro do limite!\n");
  }

  system("pause");
  return 0;
}