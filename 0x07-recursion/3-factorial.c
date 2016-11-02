#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int factorial(int n)
{
	int fact;

	fact = 0;
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	else
	{
		fact = n * factorial(n - 1);
		return fact;
	}
}
