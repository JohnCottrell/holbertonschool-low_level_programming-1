#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with a variadic function
 * @separator: separator between numbers printed
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	int i;

	if (n < 1)
	{
		putchar('\n');
		return;
	}

	va_start(arguments, n);
	i = 0;
	while (i < (int) n)
	{
		printf("%d", va_arg(arguments, int));
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arguments);
}
