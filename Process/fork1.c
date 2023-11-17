#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	getchar();
	pid = fork();
	if(pid == -1)
	perror("fork fails");
	if(pid == 0)
	{
		sleep(20);
		printf("children process pid:%d\n",getpid());
		printf("children process parent pid:%d\n",getppid());
		exit(0);
	}
	else
	{
		sleep(28);
		printf("parent process pid:%d\n",getpid());
		printf("parent process parent pid:%d\n",getppid());
		exit(0);
	}
	return 0;
}
