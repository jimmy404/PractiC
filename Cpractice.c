//fflush exercise

#include <stdio.h>

int main () {
	char c;
	
	do{
		printf("Introduce una letra: ");
		fflush(stdin);
		scanf("%c",&c);
	}while(c != 's' && c != 'S');
	
	system("pause");
	return 0;
}
