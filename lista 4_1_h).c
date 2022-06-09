#include <stdio.h>
#include <stdlib.h>
struct lista{
int elem;
};
typedef struct lista Lista;

void remove1(Lista *l1, int x){
    for(int i = 0; i < 10; i++){
        if(l1[i].elem == x){
            l1[i].elem = l1[i + 1].elem;
            l1[9].elem = -1;
        }
    }
    return;
}

int main(){
    Lista l1[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &l1[i].elem);
    }
    remove1(&l1, 3);
    for(int i = 0; i < 10; i++){
        if(l1[i].elem != -1){
            printf("%d\n", l1[i].elem);
        }
    }
    return 0;
}