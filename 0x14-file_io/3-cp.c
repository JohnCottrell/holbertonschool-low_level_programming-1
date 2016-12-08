#include "holberton.h"
#include <stdio.h>
#define BUFSIZE 1024
/**
 * main - copies a file
 *
 * @argc: argument cont
 * @argv: arguments
 * Return: Returns 97 for syntax error, 98 for read error, 99 write, 100 close
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readval, retval;
	char *buf;

	buf = malloc(sizeof(char) * BUFSIZE);
	retval = 1;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		free(buf);
		exit(97);
	}
	file_from = open(argv[1], O_RDWR);
	file_to = creat(argv[2], 0664);
	readval = read(file_from, buf, BUFSIZE);
	if (readval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				free(buf);
		exit(98);
	}
	while (readval != 0)
	{
		retval = write(file_to, buf, readval);
		if (retval == -1 || retval != readval)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					free(buf);
			exit(99);
		}
		readval = read(file_from, buf, BUFSIZE);
		if (readval == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
					free(buf);
			exit(98);
		}

	}
	retval = close(file_from);
	if (retval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
				free(buf);
		exit(100);
	}
	retval = close(file_to);
	if (retval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
				free(buf);
		exit(100);
	}
	return (1);
}
