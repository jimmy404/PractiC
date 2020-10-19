//Program - "Calculate factorial with reusable functions"

#include <stdio.h>

int factorial(int a);

int main(){
	
	int x, y, fact1, fact2;
	
	printf("Enter the first number: ");
	scanf("%i",&x);
	
	printf("Enter the second number: ");
	scanf("%i",&y);
	
	fact1 = factorial(x);
	fact2 = factorial(y);
	
	printf("The result of the factorial of x is %i.\n", fact1);
	printf("The result of the factorial of y is %i.\n", fact2);
	system("pause");
	return 0;
}

int factorial(int a){
	
	int i, aux;
	aux = 1;
	
	for( i = 1; i <= a; i++){
		aux *= i;	
	}
	
	return aux;
}

