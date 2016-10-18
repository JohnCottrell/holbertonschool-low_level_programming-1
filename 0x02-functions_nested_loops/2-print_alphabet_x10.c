#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet, ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a, n;

	n = 0;

	while (n < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a++);
		}
		_putchar(10);
		n++;
	}

	return;

}
