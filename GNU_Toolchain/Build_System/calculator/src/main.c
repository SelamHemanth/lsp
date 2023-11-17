#include<stdio.h>
#include"calculator.h"



int main()
{

	#ifdef ADD	
		printf("add result:%d\n",add(5,4));
	#endif
	#ifdef SUB
		printf("sub result:%d\n",sub(5,4));
	#endif
	#ifdef MUL	
		printf("mul result:%d\n",mul(5,4));
	#endif
	#ifdef DIV	
		printf("div result:%d\n",div(5,4));
	#endif

	return 0;
}
