#include <stdio.h>

int main(void) {
  int n1,n2,divisor2,divisor,r,soma1,r2,soma2,somareal,somareal2;
  for (n1 = 1, n2 = 1; n1 <= 10000; n1++, n2++)
	{	
	
		for (divisor = 1, divisor2 = 1; divisor <= 10000; divisor++, divisor2++)
		{			
			if (n1 % divisor == 0)
			{
				r = n1 / divisor;
				soma1 += divisor;
				
			}
			if (n2 % divisor2 == 0)
			{
				r2 = n2 / divisor2;
				soma2 +=divisor2;
				
			}
			
		}
		somareal = soma1 - n1;
		somareal2 = soma2 - n2;
		//printf("\nSOMA: %d\n",somareal);
		//printf("SOMA2: %d\n",somareal2);
		if (n1 == somareal2 && n2 == somareal)
		{
			printf("N1 %d e SOMA2 %d         ",n1,somareal2);
			printf("N2 %d e SOMA %d            SAO NUMEROS AMIGOS!\n",n2,somareal);
		}		
		
		soma1 = 0;
		soma2 = 0;
	}
	
	
	return 0;
}