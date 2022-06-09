#include <stdio.h>

int main(void) {
  int i;
  float valor[5],ma=0,me=9999,media;
  for(i=0;i<5;i++){
  printf("%i° Valor:",i+1);
  scanf("%f",&valor[i]);  
  media += valor[i];
  if (valor[i] > ma){
    ma = valor[i];
    }
  if (valor[i] < me){
    me = valor[i];  
    }
    }
  for(i=0;i<5;i++){
  printf("\nValores:%.2f",valor[i]);
    } 
  printf("\nMedia:%.2f\n",media/5);
  printf("\nMaior:%.2f\n",ma);
  printf("\nMenor:%.2f\n",me);  
  return 0;
}