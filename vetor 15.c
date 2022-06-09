#include <stdio.h>
#include <stdbool.h>
#define tam 20

int main() {
    int vet[tam],i,j;
    bool rept;
  
    for (i=0; i<tam; i++) {
        printf("%d° Numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Numeros:");
    for (i=0; i<tam; i++) {
        rept = false;
        for (j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                rept = true;
                break;
            }
        }
        if (!rept){
            printf("%d ", vet[i]);
        }
    }

    return 0;
}