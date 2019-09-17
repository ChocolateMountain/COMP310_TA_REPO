#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>

int main() {
	struct rlimit old_lim, new_lim;

	getrlimit(RLIMIT_NOFILE, &old_lim);
	printf("Old limits:\n\tsoft limit: %ld\n\thard limit: %ld\n", 
		old_lim.rlim_cur, old_lim.rlim_max);

	new_lim.rlim_cur = 3;
	new_lim.rlim_max = old_lim.rlim_max;

	if (setrlimit(RLIMIT_NOFILE, &new_lim) == -1) 
		{ printf("Handle setrlimit() error\n"); }

	int fd[2];
	if (pipe(fd) == -1)
		{ printf("Handle pipe() error\n"); }

	return 0;
}
