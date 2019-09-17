#include <stdio.h>
#include <signal.h>	// signal 

void interruptHandler(int sig);

int main() {
	signal(SIGINT, interruptHandler);
	while(1) {}
	return 0;
}

void interruptHandler(int sig) {
	printf("Caught interrupt: %i\n", sig);
}

