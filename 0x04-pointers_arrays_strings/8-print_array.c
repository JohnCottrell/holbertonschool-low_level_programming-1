#include "holberton.h"
#include <stdio.h>

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

void print_array(int *a, int n)
{
	int i;

	while (i < (n - 1))
	{
		printf("%d, ", a[i++]);
	}
	printf("%d\n", a[i]);
}
