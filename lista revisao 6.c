#include <stdio.h>

main(){ 
float n1,n2,n3,md,maior, menor;

puts("Digite tres numeros\n");

scanf("%f %f %f", &n1,&n2,&n3);

if(n1>=n2){ 
  if(n2>=n3){
    maior=n1; menor=n3; md=n2;
    } else {
    maior=n1; menor=n2; md=n3;
    }
}
if(n2>=n1){
  if(n1>=n3){
    maior=n2; menor=n3; md=n1;
    } else { 
    maior=n2; menor =n1; md=n3;
    }
}
if(n3>=n1){
  if(n1>=n2){ 
    maior=n3; menor=n2; md=n1;
    } else {
    maior=n3; menor =n1; md=n2;
    }
}
  
printf("\nMaior=%.2f \nMenor=%.2f \nMedio=%.2f",maior,menor,md);  

return 0;
} 