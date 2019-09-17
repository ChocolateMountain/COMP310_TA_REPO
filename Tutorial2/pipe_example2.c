#include <stdio.h>		// stdin, stdout
#include <unistd.h> 	// pipe, dup2, fork, execvp, close

int main() {
	int pid, fd[2];
	char *catArgs[] = { "cat", "somefile", NULL };
	char *grepArgs[] = { "grep", ".py", NULL };

	pipe(fd);
	pid = fork();

	if (pid == 0) {
		dup2(fd[0], fileno(stdin));
		close(fd[1]);
		execvp(grepArgs[0], grepArgs);
	} else {
		dup2(fd[1], fileno(stdout));
		close(fd[0]);
		execvp(catArgs[0], catArgs);
	}

	return 0;
}
