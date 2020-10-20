//Program - "A number is entered per vector and then it is read"

#include <stdio.h>

int main(){
	
	int v[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Give value to the vector in the position %i: ",i);
		scanf("%i",&v[i]);
	}
	
	for(i = 0; i < 10; i++){
		printf("%i ",v[i]);
	}
	
	printf("The value of position 0 is: %i.\n\n",v[2]);
	
	system("pause");
	return 0;
}

