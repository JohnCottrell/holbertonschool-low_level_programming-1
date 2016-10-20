#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal based on input
 *
 * @n: length of line
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar(10);

}
