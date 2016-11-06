#include "holberton.h"

/**
 * _strspn - gets the length of the prefix substring
 *
 * @s: string to check
 * @accept: substring to check
 * Return: returns the number of bytes in S that consists of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, retval, found;

	i = retval = found = 0;
	while (s[i] != '\0')
	{
		j = found = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				retval++;
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			return (retval);
		i++;
	}
	return (retval);
}
