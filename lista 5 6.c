#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//não consegui terminar
struct item
{
    char c;
};
typedef struct item Item;

struct pilha
{
    Item pilha[30];
    int len;
};
typedef struct pilha Pilha;




Pilha push(Pilha p, char c)
{
    int index = 30 - p.len - 1;
    strcpy(p.pilha[index].c,c);
    p.len = p.len + 1;
    return p;
}


Pilha criarpilha()
{
    Pilha p;
    p.len = 0;
    return p;
}

void imprimirpilha(Pilha p)
{

    for (int i = (30-p.len); i < 30; i++)
    {
        printf("%c", p.pilha[i].c);
    }
}

int main()
{
    Pilha pilha = criarpilha();
    char vetor[30] = {"ESTE EXERCECIO E MUITO FACIL."};
    for ( int i = 0; i < 30; i++)
    {
        push(pilha,vetor[i]);
        
    }
     for ( int i = 0; i < 30; i++)
    {
        
        printf("%c",pilha.pilha[i].c);
    }
    
    return 0;
}