//Program - "Check if two prime numbers are different"

#include <stdio.h>

int prime(int a);

int main(){
	
	int x, y, prim1, prim2;
	
	printf("Enter the first number: ");
	scanf("%i",&x);
	
	printf("Enter the second number: ");
	scanf("%i",&y);
	
	prim1 = prime(x);
	prim2 = prime(y);
	
	if(prim1 == 0){
		printf("The number %i is prime.\n\n", x);
	}else{
		printf("The number %i is NOT a prime.\n\n", x);
	}
	
		if(prim2 == 0){
		printf("The number %i is prime.\n\n", y);
	}else{
		printf("The number %i is NOT a prime.\n\n", y);
	}

	system("pause");
	return 0;
}

int prime(int a){
	
	int i, j, aux;
	j = 0;
	
	for(i = 2; i < a && j == 0; i++){
		aux = a %i;
		if(aux == 0){
			j = 1;	
		}
	}
	
	return j;
}

