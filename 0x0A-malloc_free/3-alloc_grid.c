#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * alloc_grid - allocate a 2d integer grid
 *
 * @width: width of grid
 * @height: height of grid
 * return: returns pointer to grid created
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, k;

	grid = (int**)malloc(height*sizeof(int*));

	for (i = 0; i < height; i++)
	{
		grid[i] = (int*)malloc(width*sizeof(int));
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return grid;
}
