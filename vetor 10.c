#include <stdio.h>

int main(){  
   int i;
   float notas[15],media,soma;
    
   for(i=0;i<15;i++){
   printf("%d° nota: ",i+1);
   scanf("%f",&notas[i]);
    
   soma += notas[i];
   }
   media = soma / 15.0;
   printf("media: %.1f",media);

   return 0;