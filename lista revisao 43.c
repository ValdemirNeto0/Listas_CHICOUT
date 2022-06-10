#include <stdio.h>

int main(){
  int nota1,nota2,aulas,falta, media,mf;
  
  printf("1° Nota do aluno (0 a 100):\n");
  scanf("%i",&nota1);
  printf("2° Nota do aluno(0 a 100):\n");
  scanf("%i",&nota2);
  printf("Quantidade de aulas:\n");
  scanf("%i",&aulas);
  printf("Quantidade de faltas:\n");
  scanf("%i",&falta);
  media = (nota1 + nota2)/2;
  mf =(falta*100)/aulas ; 
  if(media >= 60 && mf <= 25){
    printf("APROVADO\n");
    return 1;
  }else{
    printf("Reprovado\n"); 
    return 0;
  }
  return 0;
}