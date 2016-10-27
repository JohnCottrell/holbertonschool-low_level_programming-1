#include "holberton.h"

/**
 * string_toupper - sets all lowercase chars in string to uppercase
 *
 *
 *
 * @s: string to uppercase
 * Return: uppercase'd string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	i++;
	}
	return (s);
}
