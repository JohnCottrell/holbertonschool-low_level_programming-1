#include "function_pointers.h"

/**
 * int_index - searches for an integer inside an array
 *
 * @array: array to search
 * @size: size of array
 * @cmp: comparison function
 * Return: first location of array that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
