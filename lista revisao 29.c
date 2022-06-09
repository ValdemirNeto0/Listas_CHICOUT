#include<stdio.h>
#include <stdlib.h>
#include<math.h>
    float media (int n, float *vnotas);
    int main (void){
      float vnotas[10];
      float media_notas;
      int i;
      float numero =0;

      i = 0;
      while ((numero >= 0) && (i < 10)){ 
     	printf("Digite os valores das notas: ");
        scanf("%f", &numero);
        if (numero >= 0){
  		    vnotas[i] = numero;
		    i++;
  	    }
      }
  
      media_notas = media (i, vnotas);
      printf ( "\nMedia = %.1f \n", media_notas);
      system("pause");
      return 0;
    }
    float media (int n, float *vnotas){
      int i;
      float m = 0, soma = 0;
      for (i = 0; i < n; i++)
        soma = soma + vnotas[i];
      m = soma / n;
      return m;
    }