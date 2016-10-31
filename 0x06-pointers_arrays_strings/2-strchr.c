#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in string
 *
 *
 * @s: string to check
 * @c: char to check for
 * Return: returns first occurence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}
	return (NULL);
}
