#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 *
 *
 * @a: array to reverse
 * @n: number of array entries to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, start, end;

	i = 0;
	n--;
	while (i < end)
	{
		start = a[i];
		end = a[n];
		a[i++] = end;
		a[n--] = start;
	}
}
