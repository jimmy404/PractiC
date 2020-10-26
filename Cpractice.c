//Program - Structures - Gives value to 10 different structures through a for.

#include <stdio.h>
#include <string.h>

typedef struct{
	int pages;
	char name[50];
	float price;
}book;

int main(){
	
	int i;
	book book[10];
	
	for (i = 0; i < 10; i++){
		book[i].price = 20 + i;
		printf("The price of the structure %i is %f.\n",i+1,book[i].price);
	}

	system("pause");
	return 0;
}

