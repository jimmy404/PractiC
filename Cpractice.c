//Program - Structures - Program that prints books - basic.

#include <stdio.h>
#include <string.h>

typedef struct{
	int pages;
	char name[50];
	float price;
}book;

int main(){
	
	book book1, book2, book3;
	
	book1.pages = 350;
	strcpy(book1.name, "First structure");
	book1.price = 20.2;
	
	book2.pages = 450;
	strcpy(book2.name, "Second structure");
	book2.price = 18.2;
	
	book3.pages = 550;
	strcpy(book3.name, "Third structure");
	book3.price = 24.2;

	
	printf("The book 1 has %i pages.\n",book1.pages);
	printf("The book 1 is called %s .\n",book1.name);
	printf("The price of the book 1 is $ %.2f.\n\n",book1.price);
	
	printf("The book 2 has %i pages.\n",book2.pages);
	printf("The book 2 is called %s .\n",book2.name);
	printf("The price of the book 2 is $%.2f.\n\n",book2.price);
	
	printf("The book 3 has %i pages.\n",book3.pages);
	printf("The book 3 is called %s .\n",book3.name);
	printf("The price of the book 3 is $%.2f.\n\n",book3.price);

	system("pause");
	return 0;
}

