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

	mask = 1 << index;
	if (mask > 2147483648)
		return (-1);
	mask = mask & n;
	mask = mask >> index;
	return (mask);

}
