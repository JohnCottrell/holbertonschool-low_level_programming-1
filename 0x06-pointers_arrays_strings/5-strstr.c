#include "holberton.h"
#include <stdio.h>

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
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
