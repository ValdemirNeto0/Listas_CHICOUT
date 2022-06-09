#include <stdio.h>
int main()
{
   float a,b,c,m;  
  printf("Digite 3 valores \n");  
  printf("Valor A:\n"); 
  scanf("%2f",&a);
  printf("Valor B:\n"); 
  scanf("%2f",&b);
  printf("Valor C:\n"); 
  scanf("%2f",&c);
  
   m = (a+b+c)/3;

   printf("media:%.2f", m);


   return 0;

}