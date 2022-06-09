#include <stdio.h>
#include <stdlib.h>

int main()
{
int quant_lados;
float lado;
printf ("Entre com o número de lados do polígono: \n");
scanf ("%d", &quant_lados);

switch (quant_lados)
{
case (3):
printf("Qual o tamanho dos lados: \n");
scanf ("%f", &lado);
printf ("A área desse polígono é: %.2f", (lado*lado*.73)/4);
break;
case (4):
printf("Qual o tamanho dos lados: \n");
scanf ("%f", &lado);
printf ("A área desse polígono é: %.2f", lado*lado);
break;
case (6):
printf("Qual o tamanho dos lados: \n");
scanf ("%f", &lado);
printf ("A área desse polígono é: %.2f", (6*lado*lado*1.73)/4);
break;
default:
printf ("Não sei calcular a área!\n");

}

}