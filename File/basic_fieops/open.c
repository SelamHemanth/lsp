#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
	char buff[50];
	int fd,ret;
	
	fd = open("abc.txt",O_RDONLY | O_CREAT, 0666 );
	printf("fd:%d\n",fd);
	if(fd < 0){
		printf("errno:%d\n",errno);
		perror("open FAIL");
	}

	ret = read(fd,buff,6);
	printf("ret:%d\n",ret);
	if(ret < 0){
		printf("errno:%d\n",errno);
		perror("readFAIL");
	}
	printf("after read buff:%s\n",buff);
	close(fd);
	return 0;
}
