#include <stdio.h>

int main(void) {
int vet[5],i,op;

  for(i=0;i<5;i++){
    printf("%i° Numero:",i+1);
    scanf("%i",&vet[i]);
    }
  printf("[1]Mostra vetor \n[2]Vetor inverso\n[0]sair");
  printf("\nEscolha opção:");
  scanf("%i",&op);
   if (op==1){
     for(i=0;i<5;i++){
     printf("%i ",vet[i]);
   }}  
  if (op==2){
   for (i=5;i>0;i--){
       printf ("%i ",vet[i-1]);
   }  
   }
  if (op==0){
    printf("Saindo"); 
   }
  return 0;
}