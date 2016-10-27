#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

void reverse_array(int *a, int n)
{
	int i, start, end;

	i = 0;
	end = n - 1;
	while (i < end)
	{
		start = a[i];
		end = a[end];
		a[i++] = end;
		a[end--] = start;
	}
}
