#include "holberton.h"

/**
 * clear_bit - clears a bit at a specific index
 *
 * @n: int to work with
 * @index: index of bit to clear
 * Return: 1 if success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	*n &= ~(mask);
	return (1);
}
