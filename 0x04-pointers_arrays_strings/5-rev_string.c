#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}


void rev_string(char *s)
{
	int i, d, len, temp;

	len = _strlen(s) - 1;
	i = 0;
	d = len;

	while (i < (len / 2))
	{
		temp = s[i];
		s[i++] = s[d];
		s[d--] = temp;
	}
}
