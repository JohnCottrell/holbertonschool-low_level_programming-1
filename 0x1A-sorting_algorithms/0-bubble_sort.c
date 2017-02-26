#include "sort.h"

/**
 * bubble_sort - bubble sorts an array
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, flag;

	while (1)
	{
		if (size < 2)
			break;
		flag = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
