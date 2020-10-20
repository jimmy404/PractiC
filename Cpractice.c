//Program - "Calculate the probabilities that each of the numbers comes out with a vector using pointers."

#include <stdio.h>
void roll(int *v);
void read(int *v);

int main(){
	
	int v[] = {0,0,0,0,0,0};
	
	roll(v);
	read(v);

	system("pause");
	return 0;
}

void roll(int *v){
	srand(time(NULL));
	int i, aux;
	
	for( i = 0; i < 10000; i++){
		aux = rand()%6;
		
		switch(aux){
			case 0: {
				*(v+aux) += 1;
				break;
			}
			case 1: {
				*(v+aux) += 1;
				break;
			}
			case 2: {
				*(v+aux) += 1;
				break;
			}
			case 3: {
				*(v+aux) += 1;
				break;
			}
			case 4: {
				*(v+aux) += 1;
				break;
			}
			case 5: {
				*(v+aux) += 1;
				break;
			}
		}
	}
}

void read(int *v){
	int i;
	float x;
	
	
	for(i = 0; i < 6; i++){
		x = (*(v+i)*100)/10000.;
		printf("The probability that the number %i comes out is %f.\n:",i+1,x);
	}
}

