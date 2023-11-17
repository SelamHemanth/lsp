#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char msg[] = "Hello World";
void *thread_fun(void *arg);
// main thread
int main()
{
	int ret;
	pthread_t abc;
	void *retval;

	ret = pthread_create(&abc,NULL,thread_fun,(void *)msg);
	if (ret < 0){
		perror("pthread create fail:");
		exit(0);
	}
	ret = pthread_join(abc,&retval);
	if (ret < 0){
		perror("pthread join fail:");
		exit(0);
	}
	printf("retval from new thread:%s\n",(char *)retval);
	/*while(1)
	{
		printf("main thread\n");
	}*/	
	return 0;
}

// thread handler
void *thread_fun(void *arg)
{
	printf("msg:%s\n",(char *)arg);
	/*	while(1)
	{
		printf("new thread\n");
	}*/
	sleep(5);
	pthread_exit("Thanks for CPU utilizing time cycles");	
}

