//Program - "Compare two character strings."

#include <stdio.h>
#include <string.h>

int main(){
	
	char ch1[7];
	char ch2[7];
	
	printf("First sentence: ");
	fgets(ch1,7,stdin);
	
	printf("Second sentence: ");
	fflush(stdin);
	fgets(ch2,7,stdin);
	
	if(strcmp(ch1,ch2) == 0){
		printf("The two sentences are the same.\n");
	}else{
		printf("The two sentences are NOT the same.\n\n");
	}


	system("pause");
	return 0;
}

