#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */


int sqrt_helper(int n, int c)
{
	int sum;

	sum = c * c;
	if (n - sum == 0)
		return (c);
	else if (n < sum)
		return (-1);
	return (sqrt_helper(n, ++c));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return sqrt_helper(n, 2);
}
