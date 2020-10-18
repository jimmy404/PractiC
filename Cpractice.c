//Program - Program - Check if a number is Prime.

#include <stdio.h>

int main() {
	
	int n, i, j, aux;
	
	printf("Enter any number: ");
	scanf("%i", &n);
	
	j = 0;
	
	for(i = 2; i < n; i++){
		aux = n % i;
		if(aux == 0){
			j = 1;
		}
	}
	
	if(j == 1){
		printf("The number %i is not prime.\n",n);
	}else{
		printf("The number %i is prime.\n",n);	
	}
	
	system ("pause");
	return 0;
}

