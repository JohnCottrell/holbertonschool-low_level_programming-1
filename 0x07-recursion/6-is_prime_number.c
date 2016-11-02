#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */
int prime_helper(int n, int c)
{
	if (n % c == 0)
		return 0;
	if (c > (n / 2))
		return 1;
	return prime_helper(n, ++c);
}

int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;
	if (n % 2 == 0)
		return 0;
	if (n == 1)
		return 0;
	return prime_helper(n, 3);
}
