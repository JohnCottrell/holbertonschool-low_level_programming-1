#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void qs(int *array, size_t size, int start, int end);
int partition(int *array, size_t size, int pivot, int end);
void swap(int *array, size_t size, int i, int j);

void quick_sort(int *array, size_t size)
{
	qs(array, size, 0, size - 1);
}

void qs(int *array, size_t size, int start, int end)
{
	int part;

	if (end - start < 2)
		return;
	part = partition(array, size, start, end);
	qs(array, size, start, part);
	qs(array, size, part, end);
}

int partition(int *array, size_t size, int pivot, int end)
{
	int x, i, j;

	x = array[pivot];
	i = pivot - 1;
	j = end;

	while (1)
	{
		while (array[j] > x)
			j--;
		while (array[i] < x)
			i++;
		if (i < j)
			swap(array, size, i, j);
		else
			return (j + 1);
	}
}

void swap(int *array, size_t size, int i, int j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}
