#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string to search
 * @accept: acceptable bytes
 * Return: returns a pointer to s where a match is found, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
