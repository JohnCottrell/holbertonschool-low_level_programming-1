#include "holberton.h"

/**
 * print_diagonal - Print a diagonal line in the terminal
 *
 *
 * @n: length of line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, whitespace;

	whitespace = 0;
	if (n <= 0)
		_putchar(10);
	while (n > 0)
	{
		i = 0;
		while (whitespace != i)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		whitespace++;
	}
}
