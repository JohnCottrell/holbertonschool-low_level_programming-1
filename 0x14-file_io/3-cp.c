#include "holberton.h"
#include <stdio.h>

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
	char buf[1024];

	retval = 1;
	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDWR);
	file_to = open(argv[2], O_RDWR | O_CREAT | O_EXCL, 0674);
	retval = read(file_from, buf, 1024);
	if (retval == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (retval != 0)
	{
		retval = write(file_to, buf, retval);
		if (retval == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		retval = read(file_from, buf, retval);
		if (retval == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

	}
	retval = close(file_from);
	if (retval == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", retval);
		exit(100);
	}
	retval = close(file_to);
	if (retval == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", retval);
		exit(100);
	}
	return (1);
}
