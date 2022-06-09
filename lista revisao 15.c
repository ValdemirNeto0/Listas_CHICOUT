#include <stdio.h>

int main() {
float salario, imposto;

printf("Seu salario:");
  scanf ("%f",&salario);
printf("Salario  Liquota  Imposto");  

if (salario <= 1.637){
printf("\n%.2f   0    %.2f",salario, imposto);
} 
  
if (salario >= 1.6378 && salario <= 2.453){
imposto = (7.5 * salario)/100;
printf("\n%.2f   7.5    %.2f",salario, imposto);   
} 

if (salario >= 2.454 && salario <= 3.271){
imposto = (15 * salario)/100;
  printf("\n%.2f   15    %.2f",salario, imposto);
}

if (salario >=  3.272 && salario <= 4.087){
imposto = (22.5 * salario)/100;
  printf("\n%.2f   22.5    %.2f",salario, imposto);
} 

if (salario >= 4.088){
imposto = (27.5 * salario)/100;
  printf("\n%.2f   27.5    %.2f",salario, imposto);
} 
return 0;
}