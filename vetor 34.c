#include <stdio.h>
#include <stdlib.h>
 
 
 
int main()
{
int n,i,z;
int vetor [10];

scanf("%d",&n);
vetor[0]=n;
for (i=1;i<10;i++){
    printf("Numero:");
    scanf("%d",&n);
    for (z=0;z<i;z++){
        if (vetor[z]==n){
            printf("Ja tem\nNumero:");
            scanf("%d",&n);
        }
        else{
            vetor == n;
        }
        }
    }
 
    system("cls");
    for (i=0;i<10;i++){
        printf(" %d",vetor);
    }
    return 0;
}