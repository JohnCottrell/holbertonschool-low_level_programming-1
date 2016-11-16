#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return i;
		i++;
	}
	return (-1);
}
