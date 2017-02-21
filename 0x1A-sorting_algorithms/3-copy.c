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

	if (end <= start)
		return;
	part = partition(array, size, start, end);
	qs(array, size, start, part - 1);
	qs(array, size, part, end);
}

int partition(int *array, size_t size, int start, int pivot)
{
	int x, i, j;

	x = array[pivot];
	i = start - 1;
	j = pivot + 1;

	while (1)
	{

		do j--;
	        while (array[j] > x);
		do i++;
		while (array[i] < x);


		if (i >= j)
			return i;
		else
			swap(array, size, i, j);
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
