#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 6
#define C 6

int main(){
	int i, j, m[L][C], aSoma=0, bSoma=0, cSoma=0, dSoma=0, eSoma=0, fSoma=0;

	
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			 
			m[i][j]=j+1;
		}
	}

	
	
	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}


	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			// a. Soma dos elementos da diagonal principal;
			if(i==j){
				aSoma = aSoma + m[i][j];
			}

			// b. Soma dos elementos da diagonal secundária;
			if (j==C-i-1) {
				bSoma = bSoma + m[i][j];
			}

			// c. Soma dos elementos acima da diagonal principal;
			if (j>i) {
				cSoma = cSoma + m[i][j];
			}

			// d. Soma dos elementos abaixo da diagonal principal;
			if (j<i) {
				dSoma = dSoma + m[i][j];
			}

			// e. Soma dos elementos acima da diagonal secundária;
			if (j<=C-i-2) {
				eSoma = eSoma + m[i][j];
			}

			// f. Soma dos elementos abaixo da diagonal secundária;
			if (j>=C-i) {
				fSoma = fSoma + m[i][j];
			}

		}
	}

	printf("\n\n  Matriz \n\n");
	for(i=0; i < L; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < C; j++){
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");
	printf("\t A: %i\n", aSoma);
	printf("\t B: %i\n", bSoma);
	printf("\t C: %i\n", cSoma);
	printf("\t D: %i\n", dSoma);
	printf("\t E: %i\n", eSoma);
	printf("\t F: %i\n", fSoma);

	return 0;
}