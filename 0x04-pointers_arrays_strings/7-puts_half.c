#include "holberton.h"

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (i % 2 != 0)
		i = (i - 1) / 2;
	else
		i /= 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
