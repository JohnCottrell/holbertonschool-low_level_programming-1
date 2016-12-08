#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"
#define BUF_SIZE 1024

/**
 * main - copies a file
 *
 * @argc: argument cont
 * @argv: arguments
 * Return: Returns 97 for syntax error, 98 for read error, 99 write, 100 close
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, retval;
	char buf[BUF_SIZE];

	retval = 1;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDWR);
	file_to = open(argv[2], O_RDWR | O_CREAT | O_EXCL,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	retval = read(file_from, buf, BUF_SIZE);
	if (retval == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (retval != 0)
	{
		retval = write(file_to, buf, retval);
		if (retval == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		retval = read(file_from, buf, retval);
		if (retval == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

	}
	return (1);
}
