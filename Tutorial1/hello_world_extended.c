#include <stdio.h>		// fgets, printf, stdin

// function declaration 
void getUserName(char userInput[], int len);

int main() {
	// lets get the user's name
	int userInputLen = 100;
	char userInput[userInputLen];
	getUserName(userInput, userInputLen);

	// say hello 
	printf("\nHello %sWelcome to COMP 310\n", userInput);

	return 0;
}

void getUserName(char userInput[], int len) {
	char enterYourName[] = "Enter your name: ";
	printf("%s", enterYourName);
	fgets(userInput, len, stdin);
}
