#include <stdio.h>

typedef struct{
    int valor;
    struct no *proximo;
}No;

void inserir(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }
    else
        printf("Erro ao alocar memoria!\n");
}
No* buscar(No **lista, int num){
    No *aux, *no = NULL;

    aux = *lista;
    while(aux && aux->valor != num)
        aux = aux->proximo;
    if(aux)
        no = aux;
    return no;
}
void copiar_lista(No **l, No **L3){
    No *aux = *l;
    while(aux){
        inserir(L3, aux->valor);
        aux = aux->proximo;
    }
}
void inverter_lista(struct No **lista){
  struct No* nova_lista = NULL;
  struct No* tmp;
  int i;

  
    while (*lista != NULL)
    {
      tmp = *lista;
      *lista = (*lista)->proximo;
      tmp->proximo = nova_lista;
      nova_lista = tmp;
    }
  *lista = nova_lista;

}

void ordem(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){

    int opcao, valor, anterior;
    No *removido, *L1, *L2, *L3;
    L1 = NULL;
    L2 = NULL;
    L3 = NULL;

    do{
        printf("\n0-Sair\n1-Inserir\n2-Ordem\n3-Buscar\n4-Copiar L1 p/ L2\n5-Copiar L1 e L2 p/ L3\n6-inverter\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1: 
            printf("Valor L1: ");
            scanf("%d", &valor);
            inserir(&L1, valor);
            printf("Valor L2: ");
            scanf("%d", &valor);
            inserir(&L2, valor);
            break;
        case 2:
            printf("\nLista L1:\n");
            ordem(L1);
            printf("\nLista L2:\n");
            ordem(L2);
            printf("\nLista L3:\n");
            ordem(L3);
            break;
        case 3:
            printf("Digite um valor a ser buscado: ");
            scanf("%d", &valor);
            removido = buscar(&L3, valor);
            if(removido)
                printf("Elemento encontrado: %d\n", removido->valor);
            else
                printf("Elemento nao encontrado!\n");
            break;
        case 5:
            copiar_lista(&L1, &L3);
            copiar_lista(&L2, &L3);
            break;
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");
        case 4:
            copiar_lista(&L1, &L2);
            break;
        case 6:
            inverter_lista(&L1);
            break;
          }
    }while(opcao != 0);

    return 0;
}