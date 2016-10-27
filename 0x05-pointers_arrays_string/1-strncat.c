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

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = j = 0;
while (dest[i] != '\0')
	i++;
while (src[j] != '\0' && j != n)
	dest[i++] = src[j++];
dest[i] = '\0';

return (dest);
}
