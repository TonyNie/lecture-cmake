#include<stdio.h>


int main(int argc, char **argv)
{

	fprintf(stdout, "Hello, world!\n");

#ifdef ENABLE_LOG
	fprintf(stdout, "DEFINE ENABLE_LOG\n");
#endif
	return 0;
}
