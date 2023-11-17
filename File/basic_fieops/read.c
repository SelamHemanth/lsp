#include<unistd.h>
#include<stdio.h>
#include<errno.h>


int main()
{
	char buff[50];
	int ret;

	ret = read(0,buff,10);
	printf("ret:%d\n",ret);
	if(ret < 0){
		printf("errno:%d\n",errno);
		perror("readFAIL");
	}
	return 0;
}
