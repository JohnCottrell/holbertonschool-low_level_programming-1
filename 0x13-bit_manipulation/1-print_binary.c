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
	unsigned long int i, temp, cntr;

	cntr = 0;
	i = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_putchar('1');
	i = 2;
	cntr = 0;
	while (i <= n)
	{
		i = i << 1;
		cntr++;
		if (cntr >= 62)
			break;
	}
	if (cntr != 61)
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
