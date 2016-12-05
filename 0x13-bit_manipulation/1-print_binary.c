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
		if ((i & n) != 0)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
