#include "holberton.h"

/**
 * _isdigit - checks to see if input is a number from 0-9
 *
 * @c: input to check
 * Return: returns 1 if c is a digit, 0 else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
