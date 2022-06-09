#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int time1, time2,gol1,gol2,i,vencedor; 
 srand(time(NULL)); 

printf("Qual time vai ganhar? 1 ou 2:");
  scanf ("%i",&vencedor); 
printf("Gols Time 1:");
  scanf ("%i",&time1);
printf("Gols Time 2:");
  scanf ("%i",&time2);

gol1 = rand()%5;
gol2 = rand()%5;

if (vencedor == 1 ){
   //Caso time1 ganhe
  if (gol1 > gol2){
   if (gol1 != time1){
      printf("\nAcertou o vencedor, mas não acertou o número de gols dos times.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n10 Pontos",time1,time2,gol1,gol2);
    }
  if (gol1 == time1){
      printf("\nAcertou o vencedor e o número de gols do primeiro time.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n15 Pontos",time1,time2,gol1,gol2);
    }
  if (gol1 == time1 && gol2 == time2){
      printf("\nAcertou o vencedor e o número de gols de ambos os times.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n20 Pontos",time1,time2,gol1,gol2);
    }  
  }  

  //Caso time1 perca
  if (gol1 < gol2){
    if (gol1 == time1){
      printf("\nNão acertou o vencedor, mas acertou o número de gols do primeiro time.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n5 Pontos",time1,time2,gol1,gol2);
    }
    if (gol2 == time2){
      printf("\nNão acertou o vencedor, mas acertou o número de gols do segundo time.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n5 Pontos",time1,time2,gol1,gol2);
    } else {
       printf("\nNão acertou o vencedor e nem o número de gols dos times.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n0 Pontos",time1,time2,gol1,gol2);
    }  
  }
  
}

if (vencedor == 2 ){
   //Caso time2 ganhe
  if (gol1 < gol2){
   if (gol1 != time1){
      printf("\nAcertou o vencedor, mas não acertou o número de gols dos times.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n10 Pontos",time1,time2,gol1,gol2);
    }
  if (gol1 == time1){
      printf("\nAcertou o vencedor e o número de gols do primeiro time.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n15 Pontos",time1,time2,gol1,gol2);
    }
  if (gol1 == time1 && gol2 == time2){
      printf("\nAcertou o vencedor e o número de gols de ambos os times.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n20 Pontos",time1,time2,gol1,gol2);
    }  
  }  

  //Caso time2 perca
  if (gol1 > gol2){
    if (gol1 == time1){
      printf("\nNão acertou o vencedor, mas acertou o número de gols do primeiro time.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n5 Pontos",time1,time2,gol1,gol2);
    }
    if (gol2 == time2){
      printf("\nNão acertou o vencedor, mas acertou o número de gols do segundo time.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n5 Pontos",time1,time2,gol1,gol2);
    } else {
       printf("\nNão acertou o vencedor e nem o número de gols dos times.\n\nPalpite   Time1:%i Time2:%i \nResoltado Time1:%i Time2:%i\n0 Pontos",time1,time2,gol1,gol2);
    }  
  }
  
} 

return 0;
}