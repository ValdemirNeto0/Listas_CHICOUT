#include <stdio.h>
#define tam 10

int main() {
   int vet[tam], i,ma = 0, me = 0;
   
   printf("⬇ Digite seu vetor ⬇\n");
   for (i = 0; i < tam; i++) {
     printf("-> ");
       scanf ("%i", &vet[i]);
   }
   ma = vet[0];
   for (i = 1; i < tam; i++) {
       if (vet[i] > ma) {
           ma = vet[i];
       }
   }
   me = vet[0];
   for (i = 1; i < tam; i++) {
       if (vet[i] < me) {
           me = vet[i];
       }
   }
   
   printf("Vetor:");
   for (i = 0; i < tam; i++) {
       printf ("[%i]", vet[i]);

   }
   printf ("\nMaior numero é:%i", ma);
   printf ("\nMenor numero é:%i", me);
    
    return 0;
}