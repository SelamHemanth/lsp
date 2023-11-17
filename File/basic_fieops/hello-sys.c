#include<unistd.h>
#include<stdio.h>
#include<errno.h>


int main()
{
	int ret;

	ret = write(1,"Hello World\n",12);
	printf("ret:%d\n",ret);
	if(ret < 0){
		printf("errno:%d\n",errno);
		perror("Write FAIL");
	}
	return 0;
}
