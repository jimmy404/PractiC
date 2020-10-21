//Program - "Create a matrix and read it on the screen."

#include <stdio.h>
void addElements(int matrix[][5]);
void readElements(int matrix[][5]);

int main(){
	
	int matrix[5][5];
	
	addElements(matrix);
	readElements(matrix);

	system("pause");
	return 0;
}

void addElements(int matrix[][5]){
	int i, j;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			matrix[i][j] = rand()%10;
		}
	}
}

void readElements(int matrix[][5]){
	int i, j;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%i ",matrix[i][j]);
		}
		printf("\n");
	}
}

