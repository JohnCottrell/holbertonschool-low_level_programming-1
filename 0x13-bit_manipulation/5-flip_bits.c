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
	unsigned int or, retval, temp;

	or = n ^ m;
	retval = 0;
	while (or)
	{
		temp = or & 1;
		if (temp)
			retval++;
		or = or >> 1;
	}
	return (retval);
}
