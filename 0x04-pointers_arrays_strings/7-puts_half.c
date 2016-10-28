#include "holberton.h"

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * puts_half - prints the second half of a string
 *
 * @str: string to print half of
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (i % 2 != 0)
		i++;
	i /= 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
