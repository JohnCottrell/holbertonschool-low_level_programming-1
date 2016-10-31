#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the two diagonals of a square matrix
 *
 * @a: matrix to get diagonals of
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum, sum2, i, max;

	i = sum = sum2 = 0;
	max = size * size;

	while (i < max)
	{
		sum += a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i < (max - 1))
	{
		sum2 += a[i];
		i = i + (size - 1);
	}

	printf("%d, %d\n", sum, sum2);
}
