#include "holberton.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
			putnumber(n--);
	if (n < 98)
		while (n < 98)
			putnumber(n++);
	if (n == 98)
		putnumber(98);
}

/**
 * _abs - returns absolute value of parameter
 *
 * @n: parameter to get value of
 * Return: absolute value
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}

/**
 * putnumber - check the code for Holberton School students.
 *
 * @n: number to print to output
 * Return: void.
 */
void putnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = _abs(n);
	}

	if (n < 10)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}

	else if (n >= 10 && n != 98 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}

	else if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}


	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar(10);
	}

}
