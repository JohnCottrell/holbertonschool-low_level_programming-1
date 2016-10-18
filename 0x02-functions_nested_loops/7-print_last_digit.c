#include "holberton.h"

int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}

int print_last_digit(int n)
{
	int last;
	last = _abs(n);
	last %= 10;
	_putchar(last + '0');
	return (last);
}
