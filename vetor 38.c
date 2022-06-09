#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int *data;
  int size;
  int used;
} Vector;

Vector* vector_create(int size){

  Vector *v;

  if(size <= 0) return NULL;

  v = (Vector*)malloc(sizeof(Vector));

  if(v != NULL){

    v->data = (int*)calloc(size,sizeof(int));

    if(v->data == NULL){
      free(v);
      return NULL;
    }
    v->size = size;
    v->used = 0;
  }
  return v;
}

int vector_insert(Vector *v,int number){

  if(v->used == v->size) return -1;

  if(v->used == 0){
    v->data[0] = number;
    v->used++;
    return 0;
  }else{

    for(int i = 0; i < v->used; i++){

      if(number < v->data[i]){
        for(int j = v->used; j > i; j--){
          v->data[j] = v->data[j-1];
        }
        v->data[i] = number;
        v->used++;
        return 0;
      } else if(i== v->used - 1){
        v->data[v->used] = number;
        v->used++;
        return 0;
      }
    }
  }

  return 0;
}

void vector_printer(Vector *v){

  int pos;
  printf("v(%d/%d) -> [",v->used,v->size);
  for(pos = 0; pos < v->used; pos++){
    printf("%d%s",v->data[pos],(pos < v->used-1)?"-":"");
  }
  printf("]\n");
}

int main(int argc, char const *argv[]) {
  /* code */

  const int size = 10;
  Vector *v = vector_create(size);
  int number;

  for(int i = 0; i < size; i++){
    printf("Digite um número:");
    scanf("%d",&number);
    vector_insert(v,number);
  }

  printf("\n");
  vector_printer(v);

  return 0;
}