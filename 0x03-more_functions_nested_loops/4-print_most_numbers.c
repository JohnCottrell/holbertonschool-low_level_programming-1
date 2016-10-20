#include "holberton.h"

/**
 * print_most_numbers - prints 0-9, except 2 and 4
 *
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
		number++;
	}
	_putchar('\n');

}
