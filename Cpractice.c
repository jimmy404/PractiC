//Program - "Order a vector from smallest to largest using a function"

#include <stdio.h>
void orderNumbers(int a[]);
void print(int x[]);

int main(){
	
	int v[10] = {15,9,2,22,14,32,6,47,25,7};
	
	orderNumbers(v);
	print(v);

	
	system("pause");
	return 0;
}

void orderNumbers(int a[]){
	int i, j, aux;
	
	for(i = 0; i < 10; i++){
		for(j = i; j < 10; j++){
			if(a[i] > a[j]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}

void print(int x[]){
	int i;
	
	for(i = 0; i < 10; i++){
		printf("%i, ",x[i]);
	}
	printf("\n\n");
}

