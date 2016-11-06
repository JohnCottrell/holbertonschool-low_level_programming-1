#include "holberton.h"

/**
 * _isupper - Checks to see if parameter is an uppercase letter or not.
 *
 * @c: int to check
 * Return: returns 1 if uppercase letter, returns 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
