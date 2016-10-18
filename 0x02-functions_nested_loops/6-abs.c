#include "holberton.h"

/**
 * _abs - Returns absolute value of number
 *
 * @n: int to get absolute value of
 * Return: Returns absolute value.
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
