#include <stdio.h>
#include <stdlib.h>
int main(void) {
int c, num;
int impares = 0;
int nums[10], nums_imp[10];
printf("Informe 10 números entre 0 e 50.\n");
for(c=0; c<10; c++){
 while(1){
  printf("%d de 10: ", c+1);
  scanf("%d", &num);
  if(num > 0 && num <= 50){
   break; 
  }else{
   printf("O valor está fora do itervalo! Tente novamente.\n");
  }
 }
 nums[c] = num;
 if(num % 2 != 0){
  nums_imp[impares++] = num;
 }
}
printf("\nOs resultados foram:\n");
for(c=0; c<10; c++){
 if(c < impares){
  printf("%d, %d\n", nums[c], nums_imp[c]);
 }else{
  printf("%d\n", nums[c]);
 }
}
return 0;
}