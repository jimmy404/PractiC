//Program that multiplies from 1 to 9.

#include <stdio.h>

int main() {
	
	int i, j;
	
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 10; j++){
			printf("%i x %i = %i.\n",i,j,i*j);
		}
		printf("\n");
		system("pause");
	}

	system("pause");
	return 0;
}
