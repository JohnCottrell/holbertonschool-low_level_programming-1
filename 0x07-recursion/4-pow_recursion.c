#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int _pow_recursion(int x, int y)
{
        if (y == 0)
		return 1;
	if (y == 1)
		return x;
	if (y < 0)
		return -1;
	return x * _pow_recursion(x, --y);
}
