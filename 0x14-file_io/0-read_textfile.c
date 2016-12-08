#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads a textfile and prints it to stdout
 *
 * @filename: name of file to print
 * @letters: letters to print
 *
 * Return: Null on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, retval, readval;
	unsigned int i;
	char buff;

	file = retval = i = 0;
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	readval = read(file, &buff, 1);
	if (readval == -1)
		return (0);
	for (i = 0; readval != 0 && i != letters; i++)
	{
		retval = write(STDOUT_FILENO, &buff, 1);
		if (retval == -1)
			return (0);
		readval = read(file, &buff, 1);
		if (readval == -1)
			return (0);
	}
	readval = close(file);
	if (readval == -1)
		return (0);
	return (i);
}
