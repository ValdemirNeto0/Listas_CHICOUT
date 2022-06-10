#include <stdio.h>

int DIAS(int mes, int ano);

main(){
  int mes, ano;
  printf("Digite o mes : ");
  scanf("%d",&mes);
  printf("Digite o ano : ");   
  scanf("%d", &ano);
  
  printf("Numero de dias : %d",DIAS(mes,ano));  
    
  printf("\n\n");  
  system("pause");   
}

int DIAS(int mes, int ano){
   int dias;
   switch (mes) {
     case 1 :
       dias = 31;
       break;
     case 2 :
       if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){   
         printf("\nANO BISSEXTO\n");
         dias = 29;
         }
       else
         dias = 28;   
       break;
     case 3 :
       dias = 31;
       break;
     case 4 :
       dias = 30;
       break;
     case 5 :
       dias = 31;
       break;
     case 6 :
       dias = 30;
       break;
     case 7 :
       dias = 31;
       break;
     case 8 :
       dias = 31;
       break;
     case 9 :
       dias = 30;
       break;
     case 10 :
       dias = 31;
       break;
     case 11 :
       dias = 30;
       break;
     case 12 :
       dias = 31;
       break;                                
          
   } 
   return dias; 

}