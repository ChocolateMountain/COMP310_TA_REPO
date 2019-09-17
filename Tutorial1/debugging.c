#include <stdio.h>

void printArrayWithWhileLoop(char *array[], int len);
void printArrayWithForLoop(char *array[], int len);

int main() {
	int len = 5;
	char *yourComp310Marks[5] = 
		{ "A1: 34%", "A2: 55%", "A3: 49%", "A4: 5%", "A5: 21%" };

	printArrayWithWhileLoop(yourComp310Marks, len);
	printArrayWithForLoop(yourComp310Marks, len);

	return 0;
}

void printArrayWithWhileLoop(char *array[], int len) {
	int i = 0;
	while (i < len) {
		printf("%s ", array[i]);
		i++;
	}
	printf("\n");
}

void printArrayWithForLoop(char *array[], int len) {
	int i;
	for (i = 0; i <= len; i++) {
		printf("%s ", array[i]);
	}
	printf("\n");
}