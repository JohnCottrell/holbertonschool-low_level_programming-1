#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		(*action)(array[i++]);
	}
}
