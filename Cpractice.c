//Program - "Change the value of variables with a function"

#include <stdio.h>
void change(int *a, int *b);

int main(){
	
	int x, y;
	
	x = 5;
	y = 10;
	
	change(&x, &y);
	
	printf("The current value of X is %i and the current value of Y is %i.\n\n",x,y);

	system("pause");
	return 0;
}

void change(int *a, int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}

