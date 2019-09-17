#include <stdio.h>
#include <sys/types.h>	// pid_t
#include <unistd.h> 	// fork, execvp, sleep
#include <sys/wait.h>	// wait 

int main(int argc, char *argv[]) {
	pid_t pid = fork();
	if (pid == 0) {
		// CHILD 
		sleep(1);
		execvp(argv[1], &argv[1]);
	} else {
		// PARENT 
		wait(NULL);	// wait for child
		printf("\nCHILD DONE\n");
	}

	return 0;
}
