#include "holberton.h"

/**
 * _strncpy - copies a string from source to destination
 *
 *
 * @dest: destination string
 * @src: source string
 * @n: number of chars
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i != n)
				dest[i++] = '\0';
			break;
		}
		i++;
	}
	return (dest);
}
