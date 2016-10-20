#include "holberton.h"

/**
 * print_numbers - Prints 0-9 using _putchar function
 *
 *
 * Return: void
 */
void print_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
		_putchar(number++ + '0');
	_putchar('\n');
}
