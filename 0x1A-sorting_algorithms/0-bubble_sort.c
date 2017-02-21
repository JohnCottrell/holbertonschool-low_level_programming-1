#include "sort.h"

/**
 * bubble_sort - bubble sorts an array
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	for (i = 0; i < size - 1; i++)
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
			i = -1;
		}
	print_array(array, size);
}
