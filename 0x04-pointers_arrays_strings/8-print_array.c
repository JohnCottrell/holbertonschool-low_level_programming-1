#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints contents of array to stdout individually
 *
 * @a: array to print from
 * @n: number of array values of print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, len;

	i = 0;
	len = sizeof(a);
	if (n > len)
		n = len;

	if (n > 0)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i++]);
		}
		printf("%d\n", a[i]);
	}
}
