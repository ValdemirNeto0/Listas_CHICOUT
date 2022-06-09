#include<stdio.h> 
#include<stdlib.h> 


int main () 
{ 
int soma,i,j,n; 

printf ("Digite o numero");
scanf ("%d",&n);

for (i=1;i<n;i++) 
  { 
    soma=0; 
    for (j=1;j<i;j++) {
      if (i%j==0)  
      soma=soma+j; 
    } 
  if (soma==i) 
  printf("\nnumero perfeitos:%d",i); 
  }
printf ("\n\n");
system ("pause");
return 0;
}