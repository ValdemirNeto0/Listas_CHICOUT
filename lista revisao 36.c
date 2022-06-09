#include <stdio.h>

int main(void){
    int d, a, m, numero, i, continua = 1;

    do{
        numero = i = d = a = m = 0;

        printf("\nPROGRAMA MULTIPLOS\n\n");
        printf("De: ");
        scanf("%d", &d);
        printf("Ate: ");
        scanf("%d", &a);

        printf("Entre com o numero de elementos entre 1 e 10: ");
        scanf("%d", &numero);

        if (numero >= 1 && numero <= 10)
            continua = 0;
        else
            printf("Numero inválido\n");

    }while(continua);

    for (i = d; i <= a; i++)
        if (!(i % numero)){
            printf("%d ", i);
            m++;
        }
    
    printf("\nEntre %d e %d temos %d multiplos\n", d, a, m);
    return 0;
}