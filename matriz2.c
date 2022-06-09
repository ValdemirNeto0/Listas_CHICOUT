#include <stdio.h>

int main(){
    int mat[5][5], i, j, linha, coluna, num;
    char verificador;

    linha = 0;
    coluna  = 0;
	
    verificador = 'n';
	
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
	
    printf("Entre com o numero a ser procurado: ");
    scanf("%d", &num);
    printf("\n");
	
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            if(mat[i][j] == num){
               linha = i;
               coluna = j;
               verificador = 's';
            }
        }
    }
	
    if(verificador == 's'){
        printf("Numero %d encontrado na linha %d e  %d coluna", num, linha, coluna);
    }else{
        printf("Numero nao encontrado");
    }

    return 0;
}