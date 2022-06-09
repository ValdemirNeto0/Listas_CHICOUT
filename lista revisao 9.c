#include <stdio.h>

int main(void) {
  int n;
  printf("Numero de 0 a 99\n");
  scanf("%i",&n);
  if (n < 99 && n >= 0 ){
    printf("numero:%i",n);
  }else{
   printf("%i  invalido",n); 
  }
  return 0;
}