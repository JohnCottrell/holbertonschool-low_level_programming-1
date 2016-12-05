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
	unsigned int or, i, retval, temp;

	or = n ^ m;
	i = 1;
	retval = 0;
	while (i <= or)
		i = i << 1;
	i = i >> 1;
	while (i != 0)
	{
		temp = i & or;
		if (temp != 0)
			retval++;
		i = i >> 1;
	}
	return (retval);
}
