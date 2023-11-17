#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("Current PID: getpid:%d\n",getpid());
	printf("Parent PID: getippid:%d\n",getppid());
	getchar();
	return 0;
}
