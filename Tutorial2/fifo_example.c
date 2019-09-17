#include <stdio.h>		// printf, fgets, stdin	
#include <unistd.h> 	// fork, write, close, read
#include <string.h>		// strlen
#include <sys/stat.h>	// mkfifo 
#include <fcntl.h>		// open, O_WRONLY, O_RDONLY

int main() {	
	char *fifoPath = "/tmp/fifo_example";
	mkfifo(fifoPath, 0777);

	int pid = fork(), BUFFER_SIZE = 256, fd;
	char buffer[BUFFER_SIZE];

	if (pid == 0) {
		// CHILD
		fd = open(fifoPath, O_WRONLY);
		printf("Enter something: ");
		fgets(buffer, BUFFER_SIZE, stdin);
		write(fd, buffer, strlen(buffer));
		close(fd);
	} else {
		// PARENT
		fd = open(fifoPath, O_RDONLY);
		read(fd, buffer, sizeof(buffer));
		printf("You typed: %s\n", buffer);
		close(fd);
	}

	return 0;
}
