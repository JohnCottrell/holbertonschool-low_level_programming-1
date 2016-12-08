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
		return (-1);
	buff = malloc(letters * sizeof(char));
	if (buff = NULL)
		return (-1);
	file = open(filename, O_RDWR);
	if (filename == NULL || file == -1)
		return (0);
	readval = read(file, buff, letters);
	if (retval == -1)
		return (0);
	retval = write(1, buff, retval);
	if (writeval != readval || retval == -1)
		return -1;
	free(buff);
	return (retval);
}
