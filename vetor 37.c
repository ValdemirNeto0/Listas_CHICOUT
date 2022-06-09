#include <stdio.h>

int main(){
		float vetor[5];
		int codigo, i = 0;

		while(i < 5){
			printf("Elemento %d: ", i + 1);
			scanf("%d", &vetor[i]);		
		}

		printf("Código:\n");
		scanf("%d", &codigo);
	
		switch(codigo){
			case 0: break;
			case 1:
				i = 0;
				while(i < 5) printf("%d\n", vetor[i]);
				break;
			case 2:
				i = 4;
				while(i >= 0) printf("%d\n", vetor[i]);
				break;
			default: printf("Codigo invalido"); break;
		}
		getche();
}