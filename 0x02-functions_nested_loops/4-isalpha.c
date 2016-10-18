#include "holberton.h"

/**
 * _isalpha - returns 1 if number is an alphanumeric character, 0 if not
 *
 * @c: int to check for alpha
 * Return: 1 if alpha, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
