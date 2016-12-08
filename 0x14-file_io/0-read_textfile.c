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
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	file = open(filename, O_RDWR);
	if (filename == NULL || file == -1)
	{
		free(buff);
		return (0);
	}
	readval = read(file, buff, letters);
	if (readval == -1)
	{
		free(buff);
		return (0);
	}
	retval = write(1, buff, readval);
	if (retval == -1 || readval != retval)
	{
		free(buff);
		return (0);
	}
	free(buff);
	readval = close(file);
	if (readval == -1)
	{
		free(buff);
		return (0);
	}
	return (retval);
}
