#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, num[6];
   printf("Digite 6 numeros inteiros.\n");
   for(i=0; i<6; i++) {
        printf("%d° valor: ", (i+1));
    scanf("%d", &num[i]);
   }
   for(i=0; i<6; i++) {
        printf("Valores dados:%d\n",num[i]);
   }
}  