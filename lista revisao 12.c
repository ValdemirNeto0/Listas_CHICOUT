#include<stdio.h>
#include<stdlib.h>
int main(){
int sa,cin,vin,dez,cem,cinco,dois,um,duzen;

printf ("Saque de saque:");
scanf ("%i", &sa);
   if (sa!=0) {
   //nota nova 200  
   duzen = sa / 200;
   cem = (sa % 200)/ 100;  
   cin = ((sa % 200)%100)/ 50;
   vin = (((sa % 200)% 100) %50) / 20;
   dez = ((((sa % 200)% 100) %50) %20) / 10;
   cinco = (((((sa % 200)% 100) %50) %20)%10) / 5;
   dois = ((((((sa % 200)% 100) %50) %20)%10)%5) / 2;
   um = (((((((sa % 200 )% 100) %50) %20) %10) %5) %2) / 1;
}
printf
("\nNotas de 200$:%i\nNotas de 100$:%i\nNotas de 50$:%i \nNotas de 20$:%i \nNotas de 10$:%i\nNotas de 5$:%i\nNotas de 2$:%i\nNotas de 1$:%i",duzen,cem,cin,vin,dez,cinco,dois,um);

return 0;
}