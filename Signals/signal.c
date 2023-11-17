


int main()
{
	int x=5,y;

	y = x/0; // SIGFPE

	//x = *ptr; // SIGSEGV - Segmentation fault
	return 0;
}
