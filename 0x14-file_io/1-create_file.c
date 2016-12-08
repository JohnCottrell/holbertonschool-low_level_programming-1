#include "holberton.h"
#include <stdio.h>

int create_file(const char *filename, char *text_content)
{
	int file, i, retval;

	file = open(filename, O_RDWR | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	if (filename == NULL || file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	retval = write(file, text_content, i);
	if (retval == -1)
	{
		return (-1);
	}
	return (1);
}
