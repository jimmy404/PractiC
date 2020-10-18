//Program - Program - Fibonacci sequence.

#include <stdio.h>

int main() {
	
	int x, y, res, n, i;
	
	printf ("Enter a number for the Fibonacci sequence: ");
	scanf ("%i",&n);
	
	i = 3;
	x = 0;
	y = 1;
	
	if(n == 1){
		printf("0 ");
	}else{
		printf("0, 1, ");
	}
	
	while (i <= n){
		res = x + y;
		printf("%i, ",res);
		x = y;
		y = res;
		i++;
	}
	
	system ("pause");
	return 0;
}

