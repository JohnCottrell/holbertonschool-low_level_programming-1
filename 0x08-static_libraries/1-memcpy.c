#include "holberton.h"

/**
 * _memcpy - copies memory location in src to destination
 *
 *@dest: destination memory location
 *@src: source memory location
 *@n: number of bytes
 *Return: returns pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
