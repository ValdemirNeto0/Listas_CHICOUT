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

int pop(Pilha *p)
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
    for (int i = 0; i < (4 - p.len); i++)
    {
        printf("%d\t\tNULL\n", i);
    }

    for (int i = (4 - p.len); i < 4; i++)
    {
        printf("%d\t\t%d\n", i, p.pilha[i].valor);
    }
}
void funcao(Pilha p)
{
    int maior = 0, menor = 999, soma = 0;
    float media;
    for (int i = 0; i < 4; i++)
    {
        soma += p.pilha[i].valor;
        if (p.pilha[i].valor > maior)
        {
            maior = p.pilha[i].valor;
        }
         if (p.pilha[i].valor < menor)
        {
            menor = p.pilha[i].valor;
        }
    }
    media = soma/(float)p.len;
    printf("MAIOR: %d\nMENOR: %d\nMEDIA: %.2f\n",maior,menor,media);
    return;
}
int main()
{
    Pilha pilha = criarpilha();
    push(pilha,4);
    push(pilha,6);
    push(pilha,3);
    push(pilha,5);
    funcao(pilha);
    return 0;
}