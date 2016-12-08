#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - prints a long int out as a binary number
 *
 * @n: int to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, cntr;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	i = 2;
	cntr = 0;
	while (i <= n && cntr < 62)
	{
		i <<= 1;
		cntr++;
	}
	if (cntr != 62)
		i >>= 1;
	while (i != 0)
	{
		printf("i: %lu\n", i);
		printf("i & n: %lu\n", (i & n));
		if ((i & n) != 0)
			cntr++;
//			_putchar('1');
		else
			cntr++;
//			_putchar('0');
		i >>= 1;
	}
}


#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
