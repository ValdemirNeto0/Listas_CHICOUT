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
    printf("%d",p->pilha[topo]);
    p->len = p->len - 1;
    return p->pilha[topo].valor;
}

Pilha criarpilha()
{
    Pilha p;
    p.len = 0;
    return p;
}


int main()
{
    Pilha pilha = criarpilha();
    pilha = push(pilha, 1);
    pilha = push(pilha, 2);
    pilha = push(pilha, 3);
    pilha = push(pilha, 4);
    pop(&pilha);
    
    return 0;
}