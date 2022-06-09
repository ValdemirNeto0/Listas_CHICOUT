#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
typedef struct{
	float nota;
	char nome[100];
}Tipo_Concurso;	
Tipo_Concurso conc[15];
int p, op;
float maior=0, menor=9999,soma=0,media;	
char maNome[100], meNome[100];
do{
	printf("1 - Cadastrar Candidato \n2 - Média das Notas \n3 - Nome do candidato que teve a maior e menor nota \n0 - SAIR \n\nEscolha uma opcao:");
	scanf("%d",&op);
	if(op==1){
for(p=0;p<5;p++){
				printf("\t\t\nNome:");
				fflush(stdin);
				gets(conc[p].nome);
				printf("\nNota:");
				scanf("%f",&conc[p].nota);
				soma = soma+conc[p].nota;
				
				if(conc[p].nota>maior){
					maior = conc[p].nota;
					strcpy(maNome,conc[p].nome);
				}
				if(conc[p].nota<menor){
					menor = conc[p].nota;
					strcpy(meNome,conc[p].nome);
				}
				
			}
			system("cls");
	}
if(op==2){
		system("cls");
		media=soma/5;
		printf("\n\nMedia Geral dos candidatos = %.2f\n\n",media);
	}
	if(op==3){
		system("cls");
		printf("\n\n%s teve a MAIOR nota = %.2f",maNome,maior);
		printf("\n%s teve a MENOR nota = %.2f\n\n",meNome,menor);
	}
		
}while(op!=0);
}