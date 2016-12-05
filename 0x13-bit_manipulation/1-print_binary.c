#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints a long int out as a binary number
 *
 * @n: int to print
 */

void print_binary(unsigned long int n)
{
	unsigned int i, temp, cntr;

	cntr = 0;
	if (n == 4294967295)
	{
		while (cntr != 32)
		{
			_putchar('1');
			cntr++;
		}
		return;
	}
	i = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = 1;
	cntr = 0;
	while (i <= n)
	{
		i = i << 1;
		cntr++;
	}
	i = i >> 1;
	while (i != 0)
	{
		temp = i & n;
		if (temp != 0)
			_putchar('1');
		else
			_putchar('0');
		i = i >> 1;
	}
}
