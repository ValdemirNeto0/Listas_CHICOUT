#include <stdio.h>

int main(void) {
	int min=2, max, i, j, primo;
  
	scanf("numero:%i",&max);
	
	for (i = min; i <= max; i++) {
		if (i == 0 || i == 1) {
			primo = 0;
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) {
				if (i % j == 0) {
					primo = 0;
				}
			}
		}
		if (primo == 1) {
			printf("primos:%i ", i);
		}
	}
	
	return 0;
}