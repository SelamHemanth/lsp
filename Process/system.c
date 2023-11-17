#include <stdlib.h>
#include <stdio.h>

int mysystem(char *);
int main()
{
    printf("start\n");
    //system("ps -eaf");
    mysystem("ps -eaf");
    printf("end\n");
    exit(0);
}

int mysystem(char *command)
{
	int status;
	pid_t pid;
	pid = fork();
	
	if(pid == 0)
	{
		execl("/bin/sh", "sh", "-c", command, (char *) 0);
	}
	else
	{
		wait(&status);
	}
}
