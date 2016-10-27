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
