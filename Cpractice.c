//Program - Factorial of a number / Code debugging.

#include <stdio.h>

int main() {
	
	int x, i, fact;
	
	fact = 1;
	
	printf("Add a number to calculate the factorial: ");
	scanf("%i",&x);
	
	for(i = 1; i <= x; i++){
		fact = fact * i;
	}
	
	printf("The factorial of %i is %i.\n",x,fact);


	system("pause");
	return 0;

}
