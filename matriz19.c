#include<stdio.h>

int main(){
int matriz[3][3], vet[3], x, y;
for(x=0;x<3;x++){  
 for(y=0;y<3;y++){  
printf("DIGITE VALOR DA MATRIZ NA POSICAO (%d , %d) \n", x , y);
  scanf( "%d", &matriz[x][y]);  
}  
vet[x]=0;  
}  
for(y=0;y<3;y++){  
 for(x=0;x<3;x++){
  vet[y]=vet[y]+matriz[x][y];  
 }  
}  
for(x=0;x<3;x++){
   printf(" %d  ", vet[x]);  
   }  
return 0;
}#include<stdio.h>

int main(){
int matriz[3][3], vet[3], x, y;
for(x=0;x<3;x++){  
 for(y=0;y<3;y++){  
printf("DIGITE VALOR DA MATRIZ NA POSICAO (%d , %d) \n", x , y);
  scanf( "%d", &matriz[x][y]);  
}  
vet[x]=0;  
}  
for(y=0;y<3;y++){  
 for(x=0;x<3;x++){
  vet[y]=vet[y]+matriz[x][y];  
 }  
}  
for(x=0;x<3;x++){
   printf(" %d  ", vet[x]);  
   }  
return 0;
}