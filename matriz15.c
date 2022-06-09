#include <stdio.h>
#include <ctype.h>
#include <string.h>


#define QUANTIDADE_GABARITO_RESPOSTAS 5
#define QUANTIDADE_GABARITO_ALUNOS 5
#define QUANTIDADE_ALUNOS 10
#define QUANTIDADE_LETRAS_GABARITO 4

void
barraInformacoes(char *str, char caractere, int tamanho)
{
    const int quantidade_caracteres = (tamanho-(strlen(str)-1))/2;
    int contador;
    for (contador = 0; contador < quantidade_caracteres; contador++) {
        printf("%c", caractere);
    }
    printf("%s", str);
    for (contador = 0; contador < quantidade_caracteres; contador++) {
        printf("%c", caractere);
    }
    printf("\n");
}

int main(void)
{
    char
        gabarito_respostas[QUANTIDADE_GABARITO_RESPOSTAS],
        gabaritos_alunos[QUANTIDADE_ALUNOS][QUANTIDADE_GABARITO_ALUNOS];
    
    int 
        contador1,
        contador2,
        quantidade_acetos_aluno[QUANTIDADE_ALUNOS] = {0};
        
        
    barraInformacoes("GABARITO", '-', 40);
    printf("Digite as respostas das questoes como A,B,C ou D\n");
    
    for (contador1 = 0; contador1 < QUANTIDADE_GABARITO_RESPOSTAS; contador1++) {
        printf("Digite a resposta da prova [%i]:", contador1+1);
        scanf("%c%*c", &gabarito_respostas[contador1]);
    }
    
       
    barraInformacoes("RESPOSTAS DO GABARITO", '-', 40);
    printf("[-]");
    for (contador1 = 0; contador1 < QUANTIDADE_LETRAS_GABARITO; contador1++) {
        printf("[%c]", contador1+'A');
    }
    printf("\n");
    for (contador1 = 0; contador1 < QUANTIDADE_GABARITO_RESPOSTAS; contador1++) {
        printf("[%i]", contador1+1);
        for (contador2 = 0; contador2 < QUANTIDADE_LETRAS_GABARITO; contador2++) {
            if (toupper(gabarito_respostas[contador1]) == contador2+'A') {
                printf("[#]");
            } else {
                printf("[ ]");
            }
        }
        printf("\n");
    }
    
        
    barraInformacoes("GABARITO DO ALUNO", '#', 40);
    for (contador1 = 0; contador1 < QUANTIDADE_ALUNOS; contador1++) {
        printf("Digite as respostas do aluno:[%i]\n", contador1+1);
        for (contador2 = 0; contador2 < QUANTIDADE_GABARITO_ALUNOS; contador2++) {
            printf("Prova[%i]\n", contador2+1);
            printf("A, B, C ou D por favor\n:");
            scanf("%c%*c", &gabaritos_alunos[contador1][contador2]);
            
           
            if (toupper(gabaritos_alunos[contador1][contador2]) == toupper(gabarito_respostas[contador2])) {
                quantidade_acetos_aluno[contador1]++;
            }
        }
    }
    
        
    barraInformacoes("ACERTOS DE CADA ALUNO", '-', 40);
    for (contador1 = 0; contador1 < QUANTIDADE_ALUNOS; contador1++) {
        printf("O aluno %i acertou %i questoes\n", contador1+1, quantidade_acetos_aluno[contador1]);
    }
    printf("Pressione enter para encerrar o programa\n");
    getchar();
    return(0);
}