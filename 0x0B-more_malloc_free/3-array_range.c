#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array from min to max
 *
 * @min: min number in array
 * @max: max number in array
 * Return: returns pointer to array, or NULL if malloc failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	if (min == max)
		array[0] = min;
	else
	{
		while (min < max)
			array[i++] = min++;
	}
	return (array);
}
