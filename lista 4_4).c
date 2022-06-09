#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct lista{
    char nome[30];
    char email[50];
    char contato[15];
};
typedef struct lista Lista;

void inserircontato(Lista *l, int *c){
    printf("Nome: ");
    fflush(stdin);
    gets(l[*c].nome);
    printf("Email: ");
    fflush(stdin);
    gets(l[*c].email);
    printf("Contato: ");
    fflush(stdin);
    gets(l[*c].contato);
    (*c)++;
    return;
}

void removercontato(Lista *l, int *c){
    char nome[30];
    printf("Nome: ");
    fflush(stdin);
    gets(nome);
    for (int i = 0; i <= *c; i++){
        int teste;
        teste = strcmp(l[i].nome, nome);
        if (teste == 0){
            strcpy(l[i].email, l[i + 1].email);
            strcpy(l[i].contato, l[i + 1].contato);
            strcpy(l[i].nome, l[i + 1].nome);
            for (int j = i; j < (*c) - 1; j++){
                strcpy(l[j].nome, l[j + 1].nome);
                strcpy(l[j].email, l[j + 1].email);
                strcpy(l[j].contato, l[j + 1].contato);
            }
            (*c)--;
            return;
        }
    }
    printf("Contato nao encontrado!");
    return;
}

void buscarcontato(Lista *l, int *c){
    char nome[30];
    printf("Nome: ");
    fflush(stdin);
    gets(nome);
    for (int i = 0; i < (*c); i++){
        int teste;
        teste = strcmp(l[i].nome, nome);
        if (teste == 0){
            printf("Nome:%s\nEmail:%s\nContato:%s\n\n", l[i].nome,
            l[i].email, l[i].contato);
            return;
        }
    }
    printf("Contato nao encontrado!\n");
    return;
}

void editar(Lista *l, int *c){
    char nome[30];
    printf("Nome: ");
    fflush(stdin);
    gets(nome);
    for (int i = 0; i < (*c); i++){
        int teste;
        teste = strcmp(l[i].nome, nome);
        if (teste == 0){
            int op;
            char nnome[30], nemail[50], ncontato[15];
            printf("1-nome\n2-email\n3-contato\nOpcao: ");
            scanf("%d", &op);
            switch (op){
                case 1:
                    printf("Nome: ");
                    fflush(stdin);
                    gets(nnome);
                    strcpy(l[i].nome, nnome);
                    break;
                case 2:
                    printf("Email: ");
                    fflush(stdin);
                    gets(nemail);
                    strcpy(l[i].email, nemail);
                    break;
                case 3:
                    printf("Contato: ");
                    fflush(stdin);
                    gets(ncontato);
                    strcpy(l[i].contato, ncontato);
                    break;
                default:
                    break;
            }
            return;
        }
    }
    printf("Contato nao encontrado!\n");
    return;
}

int main(){
    Lista contatos[50];
    int c = 0, op;
    do{
        printf("_________________\n");
        printf("LISTA DE CONTATOS\n");
        printf("_________________\n");
        printf("1-Inserir contato\n2-Remover contato\n3-Mostrar contatos\n4-Buscar contato\n5-Editar contato\n6-Total de contatos na lista\nDigite sua opcao: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                inserircontato(&contatos, &c);
                break;
            case 2:
                removercontato(&contatos, &c);
                break;
            case 3:
                for (int i = 0; i < c; i++){
                    printf("Nome:%s\nEmail:%s\nContato:%s\n\n",
                    contatos[i].nome, contatos[i].email, contatos[i].contato);
                }
                break;
            case 4:
                buscarcontato(&contatos, &c);
                break;
            case 5:
                editar(&contatos,&c);
                break;
            case 6:
                printf("%d contatos cadastrados!", c);
                break;
            default:
                break;
        }
    } while (op > 0);
    return 0;
}