#include <stdio.h>
#define tam 5

int main() {
   int vet[tam], i,ma = 0, me = 0, pma,pme;
   
   printf("⬇ Digite seu vetor ⬇\n");
   for (i = 0; i < tam; i++) {
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
   me = vet[0];
   pme = 0;
   for (i = 1; i < tam; i++) {
       if (vet[i] < me) {
           me = vet[i];
           pme = i;
       }
   }
   
   printf("Vetor:");
   for (i = 0; i < tam; i++) {
       printf ("[%i]", vet[i]);
   }
   printf ("\nMaior posição:[%i]", ma,pma+1);
   printf ("\nMenor posição:[%i]", me,pme+1);
    
    return 0;
}