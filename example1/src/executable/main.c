#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<rslock.h>
#include<compare.h>


int main(int argc, char **argv)
{
	int fd = 0;

	fprintf(stdout, "Let't demo cmake \n");
	fprintf(stdout, "MAX(100, 200) = %d\n", rs_max(100, 200));

	if ((fd = open("/tmp/cmake_lock", O_RDWR | O_CREAT, S_IRWXU | S_IRWXG)) < 0)
		goto out;

	rs_lock(fd);

	/* do something */
	fprintf(stdout, "record locking\n");

	rs_unlock(fd);
out:
	close(fd);
	return 0;
}
