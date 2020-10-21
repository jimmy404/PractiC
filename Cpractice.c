//Program - "Compare two arrays."

#include <stdio.h>
void addElements(int array[][2]);
void compare(int array1[][2], int array2[][2]);

int main(){
	
	int array1[2][2];
	int array2[2][2];
	
	addElements(array1);
	addElements(array2);
	
	compare(array1,array2);

	system("pause");
	return 0;
}

void addElements(int array[][2]){
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Value[%i][%i]: ",i+1,j+1);
			scanf("%i",&array[i][j]);
		}
	}
}

void compare(int array1[][2], int array2[][2]){
	int i, j, aux;
	aux = 0;
	
	for(i = 0; i < 2 && aux == 0; i++){
		for(j = 0; j < 2 && aux == 0; j++){
			if(array1[i][j] != array2[i][j]){
				aux = 1;
			}
		}
	}
	if(aux == 0){
		printf("The arrays are equal.\n\n");
	}else{
		printf("The arrays are NOT equal.\n\n");
	}
}

