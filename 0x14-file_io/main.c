#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#define BUF_SIZE 100

int main(int argc, char *argv[])
{
	int file, file2, retval;
	char buf[BUF_SIZE];

	retval = 1;
	if (argc != 2)
	{
		printf("Argc != 2");
		exit(98);
	}
	file = open(argv[1], O_RDWR);
	file2 = open("test", O_RDWR | O_CREAT, S_IRWXU);
	retval = read(file, buf, BUF_SIZE);
	printf("read: %d\n", retval);
	if (retval == -1)
	{
		perror("Read error: ");
		exit(98);
	}
	while (retval != 0)
	{
		retval = write(file2, buf, retval);
		printf("write: %d", retval);
		if (retval == -1)
		{
			perror("Write error: ");
			exit(98);
		}
	      	retval = read(file, buf, retval);
		printf("read: %d\n", retval);
		if (retval == -1)
		{
			perror("Read error: ");
			exit(98);
		}

	}
	return (1);
}
