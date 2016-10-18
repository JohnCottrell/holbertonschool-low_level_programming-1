#include "holberton.h"

/**
 * print_sign - returns different value if number is zero/under zero/over zero
 *
 * @n: number to check
 * Return: 1 if number positive, 0 if zero, -1 if under zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
