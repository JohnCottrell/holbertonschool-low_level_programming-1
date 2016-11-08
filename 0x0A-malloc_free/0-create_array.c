#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "holberton.h"

/**
 * _memset - fills memory with constant bytes
 *
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

/**
 * create_array - creates an array of chars,  and initalizes it with specific
 * characters
 *
 * @size: size of array
 * @c: character to initialize array with
 * Return: returns pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int arsize;

	arsize = (sizeof(char) * (int)size);
	str = malloc(arsize);
	if (str == NULL)
		return (NULL);
	_memset(str, c, size);
	return (str);
}
