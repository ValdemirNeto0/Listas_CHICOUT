#include<stdio.h>
#include<stdlib.h>

float a,b,c;
char op;
int calcula(){
    if(op== '+'){
      c=(a+b);
    }
    if(op== '-'){
      c=(a-b);
    }
    if(op== '*'){
      c=(a*b);
    }
    if(op== '/'){
      c=(a/b);
    }
    printf("%0.2f %c %0.2f eh igual a: %0.2f\n",a,op,b,c);
   
}
int main(){
    printf("digite o simbolo da operacao desejada: ");
    scanf("%c",&op);
    printf("digite os numeros: ");
    scanf("%f",&a);
    scanf("%f",&b);
    calcula();
    system("pause");
    return 0;
}