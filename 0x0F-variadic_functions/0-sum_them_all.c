#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic function to sum all arguments
 *
 * @n: ints to be summed
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list list;


	if (n == 0)
		return (0);

	va_start(list, n);

	sum = i = 0;
	while (i < (int) n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);
	return (sum);
}
