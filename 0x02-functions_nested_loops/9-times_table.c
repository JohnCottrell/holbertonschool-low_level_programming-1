#include "holberton.h"

void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			putformatnumber(i * j++);
		}
		_putchar('\n');
		i++;
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
