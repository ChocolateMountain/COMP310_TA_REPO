#include <stdio.h>

int main() {

	int yourComp310Marks[5] = { 34, 55, 49, 5, 21 };
	
	int i = 0;
	while (i < 5) {
		printf("%i ", yourComp310Marks[i]);
		i++;
	}

	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%i ", yourComp310Marks[i]);
	}
	printf("\n");

	return 0;
}