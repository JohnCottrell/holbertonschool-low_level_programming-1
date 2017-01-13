#include "holberton.h"

/**
 * _islower - returns 1 if is a lowercase letter
 *
 * @c: character to check for lowercase
 * Return: Returns 1 if a lowercase number, returns 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
