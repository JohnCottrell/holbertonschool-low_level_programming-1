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
	int file, retval;
	char buff[letters];

	file = open(filename, O_RDWR);
	if (filename == NULL || file == -1)
		return (0);
	retval = read(file, buff, letters);
	if (retval == -1)
		return (0);
	write(1, &buff, retval);

	return (retval);
}
