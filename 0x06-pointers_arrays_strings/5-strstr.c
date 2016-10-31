#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring inside a string
 *
 * @haystack: string to search
 * @needle: substring to search for
 * Return: returns pointer to location of substring inside haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	i = j = 0;
	while (haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
		       haystack[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (haystack[i] == '\0' && needle[j] == '\0')
		{
			return (haystack + start);
		}
		i++;
	}
	return (NULL);
}
