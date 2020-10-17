//Program that reads two numbers and shows the numbers between the declared numbers.

#include <stdio.h>

int main() {
	
	int x, y, i;
	
	printf("Enter a number: ");
	scanf("%i",&x);
	
	do{
		printf("Enter a number greater than the previous one: ");
		scanf("%i",&y);
	}while (y < x);

	for(i = x + 1; i < y; i++){
		printf("%i ",i);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
