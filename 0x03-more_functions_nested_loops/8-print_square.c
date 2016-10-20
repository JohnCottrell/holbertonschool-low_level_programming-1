#include "holberton.h"

/**
 * print_square - prints a square based on input
 *
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int length, width;

	length = width = size;

	if (size <= 0)
		_putchar(10);
	while (length > 0)
	{
		width = size;
		while (width > 0)
		{
			_putchar('#');
			width--;
		}
		_putchar(10);
		length--;
	}
}
