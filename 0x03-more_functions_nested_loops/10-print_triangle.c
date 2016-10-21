#include "holberton.h"

/**
 * print_triangle - prints a triangle on the screen
 *
 * @size: desired size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int whitespace, tri, i;

	i = 1;
	if (size < 0)
		_putchar('\n');
	while (size > 0)
	{
		whitespace = size - 1;
		while (whitespace > 0)
		{
			_putchar(' ');
			--whitespace;
		}
		tri = 0;
		while (tri != i)
		{
			_putchar('#');
			tri++;
		}
		_putchar('\n');
		i++;
		size--;
	}

}
