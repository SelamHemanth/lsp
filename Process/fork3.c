#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    char *message;
    int n, exit_code;

    printf("fork program starting\n");
    pid = fork();
    switch(pid) 
    {
    case -1:
        perror("fork failed");
        exit(1);
    case 0:
        message = "This is the child";
        n = 5;
	sleep(120);
	exit_code = -5;
	//while(1);
        break;
    default:
        message = "This is the parent";
        n = 3;
	exit_code = 0;
        break;
    }

    for(; n > 0; n--) {
        puts(message);
        sleep(1);
    }

if (pid != 0) {
	int stat_val;
	pid_t child_pid;
	child_pid = wait(&stat_val); // stat_val: Upper Byte:Exit status; Lower Byte:Signal Number

	printf("Child has finished: PID = %d\n", child_pid);

	if(WIFEXITED(stat_val))
	{
		printf("Child terminated normally\n");
		printf("Exit status: stat_val Upper Byte%d\n",stat_val>>8); // Print Exit status
		printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
	}
	else
	{
		printf("Child terminated abnormally\n");
		printf("Exit status: stat_val Lower Byte%d\n",stat_val); // Print Exit status
	}
}

exit(exit_code);
}
 
