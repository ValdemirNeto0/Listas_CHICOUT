#include <stdio.h>

int main() {
int numero,somapar,i,numpar,numimp,qtdimp;

for (int i = 0; i < 6; i++) {
printf("%i°Numero",i+1);
  scanf("%i",&numero);
if (numero %2==0){
  numpar = numero;
  somapar += numero;
}
if (numero %2==1){
numimp = numero; 
qtdimp++;  
}  
}

printf("\nNúmeros pares digitados:", numpar);
printf("\nSoma dos números pares:", somapar);
printf("\nNúmeros ímpares digitados:", numimp);
printf("\nQuantidade de ímpares digitados:",qtdimp);        
return 0;
}