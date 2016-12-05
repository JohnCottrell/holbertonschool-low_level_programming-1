#include "holberton.h"

/**
 * flip_bits - tells you how many bits you'd need to flip to make
 * one number into another
 *
 * @n: number one
 * @m: number two
 * Return: Number of bits you'd need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int retval;

	or = n ^ m;
	retval = 0;
	while (or > 0)
	{
		if ((or & 1) != 0)
			retval++;
		or = or >> 1;
	}
	return (retval);
}
