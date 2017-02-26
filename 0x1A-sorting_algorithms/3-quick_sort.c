#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - wrapper to call qs to sort an array
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, size, 0, size - 1);
}

/**
 * qs - recursively sorts an array
 * @array: array to sort
 * @size: size of the array
 * @start: starting point
 * @end: ending point (and pivot)
 */
void qs(int *array, size_t size, int start, int end)
{
	int part;

	if (end <= start)
		return;
	part = partition(array, size, start, end);
	qs(array, size, start, part - 1);
	qs(array, size, part, end);
}

/**
 * partition - partitions an array using hoare partition scheme
 * @array: array to partition
 * @size: size of the array
 * @start: lo for the partition
 * @pivot: pivot
 * Return: returns new place to pivot from
 */
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
			return (i);
		swap(array, size, i, j);
	}
}

/**
 * swap - swaps two elements in an array
 * @array: array to swap in
 * @size: size of the array
 * @i: swapped with j
 * @j: swapped with i
 */
void swap(int *array, size_t size, int i, int j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}
