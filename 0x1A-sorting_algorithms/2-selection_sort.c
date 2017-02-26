#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array by selection sort
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, temp, j, swap;

	for (i = 0; i < (size - 1); i++)
	{
		swap = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[i] && array[j] < array[swap])
			{
				swap = j;
			}
		}
		if (swap != i)
		{
			temp = array[i];
			array[i] = array[swap];
			array[swap] = temp;
			print_array(array, size);
		}

	}
}
