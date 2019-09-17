#include <stdio.h>

int main() {
	int *pointer = NULL; // no value yet, good practice to NULL
	int yourComp310Grade = 12;
	int personSittingNextToYouGrade = 100;

	// set the value of the ptr
	// to the mem loc `&` of `yourComp310Grade` 
	// same as `int *pointer = &yourComp310Grade;`
	pointer = &yourComp310Grade; 
	printf("My grade is %i\n", *pointer); 	// `*` - derefs ptr
											// 12

	*pointer += 4;
	printf("My grade is %i\n", yourComp310Grade);	// 16

	pointer = &personSittingNextToYouGrade;
	printf("Person beside me has %i\n", *pointer);	// 100

	return 0;
}