#include "holberton.h"

/**
 * set_bit - sets a bit at a specific index to 1
 *
 * @n: int to work with
 * @index: index of bit to set
 * Return: returns 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
