#include <stdio.h>
int main (){
  int n,i,vet[50],cont=1,maior=0;
     scanf ("%d",&n);
     for (i=0;i<n;i++) scanf ("%d",&vet[i]);
     for (i=1;i<n;i++){
         if (vet[i] > vet[i-1])
             cont++;
         else{
             if (cont > maior)
                 maior = cont;

             cont=1;
         }
     }			  
     printf ("A maior sequencia crescente tem tamanho %d\n",maior);
     
     return 0;
}