#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - uses jump search to find a given number in a sorted array
 *
 * @array: array to search in
 * @size: size of array
 * @value: value being searched for
 *
 * Return: returns the first index of the value, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i;

	if (!array || size < 1)
		return (-1);
	step = sqrt(size);
	i = 0;
	while (array[i + step] < value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i + step;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%ld] and [%ld]\n",
	       i, i + step);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i + step] < value)
			i = i + step;
		else
			i++;
	}

	return (-1);
}
