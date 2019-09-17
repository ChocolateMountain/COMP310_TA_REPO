#include <stdio.h>
#include <unistd.h> 	// pipe, fork, write, read, close 
#include <string.h>		// strlen 

int main() {
	int pid, fd[2];
	char helloWorld[] = "Hello world\n";
	char buffer[4096];

	pipe(fd);
	pid = fork();

	if (pid == 0) {
		// CHILD
		close(fd[0]);
		write(fd[1], helloWorld, (strlen(helloWorld)));
	} else {
		// PARENT 
		close(fd[1]);
		read(fd[0], buffer, sizeof(buffer));
		printf("%s", buffer);	// "Hello world"
	}

	return 0;
}