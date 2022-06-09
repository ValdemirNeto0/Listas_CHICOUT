#include <stdio.h>
#define tam 6

int main() {
   int vet[tam],i;
     
   printf("⬇ Digite seu vetor ⬇\n");
   for (i = 0; i < tam; i++) {
     printf("-> ");
       scanf ("%i", &vet[i]);
    }
   printf("Vetor:");
   for (i = 0; i < tam; i++) {
       printf ("[%i]", vet[i]);
   }
  
   printf("\nInverso pares:");
    for (i = tam; i > 0; i--) {
      if (vet[i]%2==0){
       printf ("[%i]", vet[i]);
     }  
    }  
    return 0;
}