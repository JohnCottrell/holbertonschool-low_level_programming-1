#include "holberton.h"

/**
 * _strcat - concat strings, src appended to dest
 *
 * @dest: destination string
 * @src: source string
 * Return: returns finished string
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (dest[i] != '\0')
	i++;
while (src[j] != '\0')
	dest[i++] = src[j++];
dest[i] = '\0';

return (dest);
}
