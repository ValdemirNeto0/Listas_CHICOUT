#include<stdio.h>

#include<stdlib.h>

int main(){
int qtd_hrs_trab = 0;
float val_hrs_trab = 0,base_sal = 0,sal_trab = 0;
printf("Digite o valor da hora trabalhada: \n");
scanf("%f",&val_hrs_trab);
printf("Digite o numeros de horas trabalhadas na semana: \n");
scanf("%d",&qtd_hrs_trab);
if (qtd_hrs_trab <= 40){
base_sal = qtd_hrs_trab * val_hrs_trab;
printf("**Funcionario sem acrescimo de adcional: %.2f\n\n**",base_sal);
}
if (qtd_hrs_trab > 40 && qtd_hrs_trab <= 60){
base_sal = qtd_hrs_trab * val_hrs_trab;
sal_trab = base_sal * 0.50 + base_sal;
printf("**Funcionario com acrescimo de 50% no salario: %.2f\n\n**",sal_trab);
}
if (qtd_hrs_trab > 60){
base_sal = qtd_hrs_trab * val_hrs_trab;
sal_trab = base_sal * 0.100 + base_sal;
printf("**Funcionario com acrescimo de 100% no salario: %.2f\n\n**",sal_trab);
}else{
printf("**opcao invalida\n\n**");
}

system("pause");

return 0;

}