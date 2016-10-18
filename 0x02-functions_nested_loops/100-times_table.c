#include "holberton.h"

void print_times_table(int n)
{
	int i, j;

	i = 0;
	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
				putformatnumber(i * j++);
			_putchar('\n');
			i++;
		}
	}
}


void putformatnumber(int n)
{
	if (n < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
