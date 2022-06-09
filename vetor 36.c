#include <stdio.h>

int main(void) {
 float vet[10];
  int i;
  for (i=0;i<10;i++){
    printf("Valor:");
    scanf("%f",&vet[i]);
  }
  int j;
  float temp; 
  for (i=10;i>0;i--){
    for (j=1;j<=i;j++){
      if (vet[j-1]>vet[j]){
        temp = vet[j-1];
        vet[j-1] = vet[j];
        vet[j] = temp;
      }  
    }
  }
  printf("ordem vetor:");
    for (i=0;i<10;i++){
     printf("%.2f",vet[i]); 
    }
  system("pause");
  return 0;
}