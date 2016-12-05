#include "holberton.h"

/**
 * get_bit - gets the value of a specific bit at a specific index
 *
 * @index: index to check
 * @n: number to check
 * Return: returns the value, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	mask = mask & n;
	mask = mask >> index;
	return (mask);

}
