#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - performs basic binary search operation
 *
 * @array: array to search in
 * @size: size of array
 * @value: value being searched for
 *
 * Return: returns the first index of the value, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first, last, middle;

	if (!array)
		return (-1);

	first = 0;
	last = size;
	while (first <= last)
	{
		print_search(array, first, last);
		middle = (first + last) / 2;
		if (array[middle] == value)
			return (middle);
		if (last - first == 1)
			return (-1);
		if (array[middle] > value)
			last = middle;
		else if (array[middle] < value)
			first = middle;
	}
	return (-1);
}

/**
 * print_search - prints information in a specific format for requirements
 *
 * @array: array
 * @first: start of array
 * @last: last char in array
 */
void print_search(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i < last - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);

}
