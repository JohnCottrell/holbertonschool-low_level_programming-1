#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, from a - z, followed by a newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar(10);

	return;

}
