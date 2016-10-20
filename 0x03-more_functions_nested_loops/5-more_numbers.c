#include "holberton.h"

/**
 * more_numbers - prints 0-14, followed by a new line
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int numbers, count;

	numbers = 0;
	count = 0;
	while (count < 10)
	{
		numbers = 0;
		while (numbers < 15)
		{
			if (numbers >= 10)
				_putchar(numbers / 10 + '0');
			_putchar(numbers % 10 + '0');
			numbers++;
		}
		_putchar('\n');
	count++;
	}

}
