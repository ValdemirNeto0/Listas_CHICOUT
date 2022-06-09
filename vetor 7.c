#include <stdio.h>
#define tam 10

int main() {
   int vet[tam], i,ma = 0, me = 0, pma,pme;
   
   printf("⬇ Digite seu vetor ⬇\n");
   for (i = 0; i < tam; i++) {
     printf("-> ");
       scanf ("%i", &vet[i]);
   }
   ma = vet[0];
   pma = 0;
   for (i = 1; i < tam; i++) {
       if (vet[i] > ma) {
           ma = vet[i];
           pma = i;
       }
   } 
   printf("Vetor:");
   for (i = 0; i < tam; i++) {
       printf ("[%i]", vet[i]);
   }

   printf ("\nMaior numero é:%i na posição:[%i]", ma,pma+1);

return 0;
}