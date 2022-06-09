#include <stdio.h>
int main() {

int numeros[10],par=0,contador=0;
printf("Numero\n");
for(int i=0;i<10;i++){
    printf("-> ");
    scanf("%d",&numeros[i]);
}
for(int i=0;i<10;i++){
    if(numeros[i]%2==0){
    contador=contador+1;
    }
}
    printf("O total de números pares é:%d",contador);

    return 0;
}