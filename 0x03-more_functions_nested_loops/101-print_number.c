#include "holberton.h"

/**
 * print_number - takes in number, prints using putchar
 *
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	int digits, stop, i, num;

	i = 1;
	digits = 0;
	stop = 0;

	if (n < 0)
	{
		_putchar('-');
		n = _abs(n);
	}
	while (stop == 0)
	{
		if ((n / _pow(10, i)) < 1)
			break;
		i++;
		digits++;
	}

	num = n / _pow(10, digits);
	_putchar(num + '0');

	while (digits > 0)
	{
		num = n % _pow(10, digits--);
		num = num / _pow(10, digits);
		_putchar(num + '0');
	}
}

/**
 * _pow - Quick pow implementation.
 * Description: Multiples number by itself a number of times
 * designated by the exponent.
 *
 * @base: base number
 * @exponent: exponent, number of times to multiply base by itself
 * Return: returns zero
 */
long _pow(int base, int exponent)
{
	unsigned long int val = 1;

	while (exponent > 0)
	{
		val *= base;
		exponent--;
	}
	return (val);

}

/**
 * _abs - Returns absolute value of number
 *
 * @n: int to get absolute value of
 * Return: Returns absolute value.
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
