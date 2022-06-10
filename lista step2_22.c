#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
/*
Elabore um programa que, recebendo estes dados calcule e mostre:
a quantidade de respostas ótimo;
a diferença percentual entre respostas bom e regular;
a média de idade das pessoas que responderam ruim;
a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
*/
typedef struct{
    int idade, opniao;
}Espectador;

int main(){
    system("cls");
    int a=10,c_pessimo=0,c_ruim=0,c_regular=0,c_bom=0,c_otimo=0, s_i_ruim, maior_idade_pessimo = 0, maior_idade_ruim=0, maior_idade_otimo=0, diferenca_otimo_ruim;
    float media_ruim, diferenca_bom_regular, percentagem_pessimo;
    Espectador vetor[a];
    for(int x=0; x<a; x++){
        printf("Idade:\n");
        scanf("%d", &vetor[x].idade);
        printf("opiniao: (1-pessimo 2-ruim 3-regular 4-bom 5-otimo)\n");
        scanf("%d", &vetor[x].opniao);
        if(vetor[x].opniao == 1){
            c_pessimo++;
            if(vetor[x].idade > maior_idade_pessimo){
                maior_idade_pessimo = vetor[x].idade;
            }
        }
        else if(vetor[x].opniao == 2){
            c_ruim++;
            s_i_ruim = s_i_ruim + vetor[x].idade;
            if(vetor[x].idade > maior_idade_ruim){
                maior_idade_ruim = vetor[x].idade;
            }
        }
        else if(vetor[x].opniao == 3){
            c_regular++;
        }
        else if(vetor[x].opniao == 4){
            c_bom++;
        }
        else if(vetor[x].opniao == 5){
            c_otimo++;
            if(vetor[x].idade > maior_idade_otimo){
                maior_idade_otimo = vetor[x].idade;
            }
        }
    }
    //qtd otimo (c_otimo)
    //diferenca percentual entre bom e regular ((c_bom/c_regular)-1)*100;
    diferenca_bom_regular = ((c_bom/c_regular)-1)*100;
    //media idade ruim
    media_ruim = s_i_ruim/a;
    //percentagem de pessimo e maior idade pessimo ()
    percentagem_pessimo = c_pessimo/a;
    //diferenca de idade do mais velho de otimo e mais velho ruim ()
    if(maior_idade_otimo > maior_idade_ruim){
        diferenca_otimo_ruim = maior_idade_otimo - maior_idade_ruim;
    }else{
        diferenca_otimo_ruim = maior_idade_ruim - maior_idade_otimo;
    }
    printf("quantidade de otimos: %d\n", c_otimo);
    printf("diferenca percentual entre bom e regular: %.2f\n", diferenca_bom_regular);
    printf("media das idades do ruim: %.2f\n", media_ruim);
    printf("percentagem de pessimo: %.2f\nmaior idade do pessimo: %d\n", percentagem_pessimo, maior_idade_pessimo);
    printf("diferenca de idade do mais velho de otimo e mais velho ruim: %d\n", diferenca_otimo_ruim);
    return 0;
}