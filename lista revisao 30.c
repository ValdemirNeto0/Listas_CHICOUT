#include <stdio.h>
#define tam 6

int main() {
   int vet[tam], i,ma = 3,pma;
   
   printf("⬇ Digite seu vetor ⬇\n");
   for (i = 0; i < tam; i++) {
       scanf ("%i", &vet[i]);
   }
   ma = vet[0];
   pma = 0;
   for (i = 1; i < tam; i++) {
       if (vet[i] == ma) {
           ma = vet[i];
           pma = i;
       }
   }
   printf("Numeros:");
   for (i = 0; i < tam; i++) {
       printf ("[%i]", vet[i]);
   }
   printf ("\numero:%i na posição:[%i]", ma,pma+1);
    return 0;
}