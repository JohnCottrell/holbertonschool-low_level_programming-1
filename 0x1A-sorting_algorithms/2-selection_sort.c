#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int i, temp, j, swap;

	for (i = 0;i < (size - 1);i++)
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
