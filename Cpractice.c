//Program - Structures - Registration Form.

#include <stdio.h>

typedef struct{
	char name[60];
	char job[50];
	int age;
}reg;

int main(){
	
	reg form1, form2;
	
	printf("Enter values for form 1: \n");
	printf("Enter your name: ");
	fgets(form1.name,60,stdin);
	
	printf("Enter your job: ");
	fflush(stdin);
	fgets(form1.job,50,stdin);
	
	printf("Enter your age: ");
	scanf("%i",&form1.age);
	
	printf("Enter values for form 2: \n");
	printf("Enter your name: ");
	fflush(stdin);
	fgets(form2.name,60,stdin);
	
	printf("Enter your job: ");
	fflush(stdin);
	fgets(form2.job,50,stdin);
	
	printf("Enter your age: ");
	scanf("%i",&form2.age);

	printf("The values are: \n");
	printf("The name of form 1 is: %s", form1.name);
	printf("The name of form 2 is: %s", form2.name);
	
	printf("The form 1 job is: %s", form1.job);
	printf("The form 2 job is: %s", form2.job);
	
	printf("The age of form 1 is: %i\n", form1.age);
	printf("The age of form 2 is: %i\n", form2.age);

	system("pause");
	return 0;
}

