#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints a long int out as a binary number
 *
 * @n: int to print
 */

void print_binary(unsigned long int n)
{
	unsigned int i, temp;

	i = 1;
	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}
	i = 1;
	while (i <= n)
		i = i << 1;
	i = i >> 1;
	while (i != 0)
	{
		temp = i & n;
		if (temp != 0)
			putchar('1');
		else
			putchar('0');
		i = i >> 1;
	}
}
