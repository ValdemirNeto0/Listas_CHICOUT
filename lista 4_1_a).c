#include <stdio.h>
#include <stdlib.h>
struct lista{
    int valor
};
typedef struct lista Lista;

int ordem(Lista a[], int len){
    int ordem = 0;
    for (int i = 1; i < len; i++){
        if(a[i - 1].valor < a[i].valor){
            //nada
        }else{
            ordem++;
            break;
        }
    }
    if (ordem == 1){
        ordem = 0;
        for (int i = 1; i < len; i++){
            if (a[i - 1].valor > a[i].valor){
                //nada
            }else{
                ordem++;
                break;
            }
        }
    }
    if (ordem == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    Lista l1[10] = {1,2,3,4,5,6,7,8,9,10};
    int resp;
    for (int i = 0; i < 10; i++){
        scanf("%d", &l1[i].valor);
    }
    resp = ordem(l1, 10);
    printf("%d", resp);
    return 0;
}
