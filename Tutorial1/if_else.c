#include <stdio.h>	// printf
#include <stdlib.h> // srand, rand
#include <time.h>	// time

int isEven(int n);

int main() {
	
	srand(time(NULL)); // seed random number generator
	int r = rand();

	if (isEven(r)) {
		printf("%i is even\n", r);
	} else {
		printf("%i is odd\n", r);
	}

	return 0;
}

int isEven(int n) {
	return n % 2 == 0;
}
