#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void){
  int i,numero,op,tent=0;
  
  srand(time(NULL));
  numero = rand() % 500;
do{
  //printf("\nNumero é %i",numero);
  printf ("\nSeu palpite:");
  scanf("%i",&op);
  if (op>numero){
    tent++;
  printf("\nNumero é menor");  
  }
  if (op<numero){
    tent++;
  printf("\nNumero é maior");  
  }
  if (op==numero){
    tent++;
  printf("\nAcertou MZRV");
    if(tent >=1 && tent<=3){
      printf ("\nmuito sortudo:%i tentativas",tent);
    }
    if(tent >=4 && tent<=6){
      printf ("\nsortudo:%i tentativas",tent);
    } 
    if(tent >=7 && tent<=10){
      printf ("\nnormal:%i tentativas",tent);
    }  
    if(tent >10){
      printf ("\nruim dms:%i tentativas",tent);
    }  
  }
  
}while(op!=numero);

  return 0;
}