#include <stdio.h>

int main(void) {
  int i,num[10],x=0,res;
  printf("Numero x:");
  scanf("\n%i",&x);
  printf("Numeros:\n");
  for(i=0;i<10;i++){
    scanf("\n%i",&num[i]);
    res=num[i]*x;
    printf("%i*%i=%i\n",num[i],x,res);
  }
  
  return 0;

}