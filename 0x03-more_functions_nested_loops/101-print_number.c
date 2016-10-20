#include "holberton.h"

/**
 * mypow - Quick pow implementation.
 * Description: Multiples number by itself a number of times
 * designated by the exponent.
 *
 * @base: base number
 * @exponent: exponent, number of times to multiply base by itself
 * Return: returns zero
 */
long mypow(long base, long exponent)
{
	long val = 1;

	while (exponent > 0)
	{
		val *= base;
		exponent--;
	}
	return (val);

}

/**
 * print_number - takes in number, outputs  using putchar
 *
 * @n: number to putchar
 * Return: void
 */
void print_number(int n)
{
	long digits, stop, i, num;

	i = 1;
	digits = 0;
	stop = 0;

	if (n < 0)
	{
		_putchar('-');
		n = (n - (n * 2));
	}
	while (stop == 0)
	{
		if ((n / mypow(10, i)) < 1)
			break;
		i++;
		digits++;
	}

	num = n / mypow(10, digits);
	_putchar(num + '0');

	while (digits > 0)
	{
		num = n % mypow(10, digits--);
		num = num / mypow(10, digits);
		_putchar(num + '0');
	}
}
