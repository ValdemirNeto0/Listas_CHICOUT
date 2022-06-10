//Pilhas são estruturas de dados que seguem a ordem “LIFO” (Last in first out), ou seja, o último termo adicionado a pilha será o primeiro a sair.
//Funções recursivas, janelas em um programa.
#include <stdio.h>
#include <stdlib.h>
struct item
{
    int valor;
};
typedef struct item Item;

struct pilha
{
    Item pilha[4];
    int len;
};
typedef struct pilha Pilha;

int tamanho(Pilha p)
{
    return p.len;
}

int pilhavazia(Pilha p)
{
    return (p.len == 0);
}

Pilha push(Pilha p, int valor)
{
    int index = 4 - p.len - 1;
    p.pilha[index].valor = valor;
    p.len = p.len + 1;
    return p;
}

int pop(Pilha* p)
{
    int topo = 4 - p->len;
    p->len = p->len - 1;
    return p->pilha[topo].valor;
}

Pilha criarpilha()
{
    Pilha p;
    p.len = 0;
    return p;
}

void imprimirpilha(Pilha p)
{
    for (int i = 0; i < (4-p.len); i++)
    {
        printf("%d\t\tNULL\n", i);
    }
    
    for (int i = (4-p.len); i < 4; i++)
    {
        printf("%d\t\t%d\n", i, p.pilha[i].valor);
    }
}

int main()
{
    Pilha pilha = criarpilha();
    pilha = push(pilha, 1);
    pilha = push(pilha, 2);
    pilha = push(pilha, 3);
    pilha = push(pilha, 4);
    imprimirpilha(pilha);
    pop(&pilha);
    pop(&pilha);
    pop(&pilha);
    pop(&pilha);
    imprimirpilha(pilha);
    pilha = push(pilha, 2);
    pilha = push(pilha, 4);
    pilha = push(pilha, 3);
    pilha = push(pilha, 1);
    imprimirpilha(pilha);
    return 0;
}