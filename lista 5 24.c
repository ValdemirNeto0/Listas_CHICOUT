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


Pilha criarpilha()
{
    Pilha p;
    p.len = 0;
    return p;
}

int totalpar(Pilha p)
{
    int par=0;
    
    for (int i = 0; i < 4; i++)
    {
        if( p.pilha[i].valor % 2 == 0)
        {
            par++;
        }
    }
    return par;
}

int main()
{
    Pilha pilha = criarpilha();
    pilha = push(pilha, 1);
    pilha = push(pilha, 2);
    pilha = push(pilha, 3);
    pilha = push(pilha, 4);
    printf("numeros pares: %d",totalpar(pilha));
    return 0;
}