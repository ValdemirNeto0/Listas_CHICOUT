#include <stdio.h>

int main(){
  int i;
  float numeros[10], quadrados[10];
  for(i = 0; i < 10; i++){
    printf("%i°",(i+1));
    scanf("%f",&numeros[i]);
 }
 for(i = 0; i < 10; i++){
   quadrados[i] = numeros[i] * numeros[i];
 }
 for(i = 0; i < 10; i++){
    printf("%i°[%.2f] ",i+1,numeros[i]);
 }
 printf("\n");
 for(i = 0; i < 10; i++){
    printf("%i°[%.2f] ",i+1,quadrados[i]);
 }
 return 0;
}